#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

void exit_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

int main(int argc, char *argv[])
{
	char buffer[1024];
	int f_from;
	int f_to;
	ssize_t readed;
	ssize_t written;
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		exit_error(97, "Usage: cp file_from file_to");
	}

	file_from = argv[1];
	file_to = argv[2];

	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit_error(98, "");
	}

	f_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
       if (f_to == -1)
       {
      	 	close(f_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",  file_to);
		exit_error(99, "");
       }

	while ((readed = read(f_from, buffer, 1024) > 0))
	{
		written = write(f_to, buffer, readed);
		if (written == -1)
		{
			close(f_from);
			close(f_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit_error(99, "");
		}
	}

	if (readed == -1)
	{
		close(f_from);
		close(f_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit_error(98, "");
	}

	if (close(f_from) == -1)
	{
		exit_error(100, "");
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
	}
	if (close(f_to) == -1)
	{
		exit_error(100, "");
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
	}

	return (0);
}
