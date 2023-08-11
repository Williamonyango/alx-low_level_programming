#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t _read, _write;

	if (!filename)
		return (0);

	/* Open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* Read the file */
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write the file */
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	free(buffer);
	return (_read);
}
