#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Entry point for a program that copies
 * the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success,
 * 98 for read errors, 99 for write errors,
 * 100 for close errors, 97 for argument count errors.
 */


int main(int argc, char **argv)
{
	char *fileFrom, *fileTo;
	char buffer[BUFFER_SIZE];
	ssize_t size;
	int fd, fd2;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to,");
		return (98);
	}
	fileFrom = argv[1];
	fileTo = argv[2];
	fd = open(fileTo, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	fd2 = open(fileFrom, O_RDONLY);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", fileFrom);
		return (98);
	}
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", fileTo);
		return (99);
	}
	size = read(fd2, buffer, sizeof(buffer));
	buffer[size] = '\0';
	dprintf(fd, "%s", buffer);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		return (100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		return (100);
	}

	return (0);
}

