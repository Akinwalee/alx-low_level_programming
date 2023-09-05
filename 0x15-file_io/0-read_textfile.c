#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX STDOUT
 *
 * @filename: The file to read
 * @The number of letters to read and print
 *
 * Return: The number of letters read and printed. 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int text;
	char *buffer;
	ssize_t read_text;
	ssize_t written;
	
	text = open("filename", O_RDONLY);
	
	if (filename == NULL || text == -1)
		return (0);
	
	buffer = malloc(sizeof(char) * letters);
	read_text = read(text, buffer, letters);
	written = write(STDOUT_FILENO, buffer, read_text);

	free(buffer);
	close(text);

	return (written);
}
