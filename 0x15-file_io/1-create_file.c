#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file and writes a text to it
 *
 * @filename: The name of the file to create
 * @text_content: Text to write to the created file
 *
 * Return: ! (Success), 0 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL || file == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(file, text_content, strlen(text_content));

		if (written == -1)
		{
		close(file);
		return (-1);
		}
	}

	close(file);
	return (1);
}
