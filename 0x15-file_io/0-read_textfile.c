#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
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
	char buffer[BUF_SIZE * 8];
	int size;
	ssize_t size2;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	size = read(fd, buffer, letters);
	size2 = write(1, buffer, size);
	if (size2 == -1 || size2 != size)
		return (0);
	close(fd);
	return (size2);
}

