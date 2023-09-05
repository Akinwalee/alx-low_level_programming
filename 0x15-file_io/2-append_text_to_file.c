#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: The file to append text to
 * @text_content: The text to append
 *
 * Return: 1 if successful. -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;

	file = open(filename, O_WRONLY | O_APPEND);

		if (filename == NULL || text_content == NULL || file == -1)
			return (-1);

	written = write(file, text_content, strlen(text_content));
	if (written == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
