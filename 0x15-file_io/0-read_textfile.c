#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file name
 * @letters:  size of the buffer
 * Return: the number of charcteres printed by the standard output.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int size;
	ssize_t size2;

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	size = read(fd, buffer, letters);
	if (size < 0)
		return (0);
	buffer[size] = '\0';
	size2 = write(1, buffer, size);
	if (size2 < 0)
		return (0);
	close(fd);
	free(buffer);
	return (size2);
}
