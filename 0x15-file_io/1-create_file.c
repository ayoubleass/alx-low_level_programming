#include "main.h"
#include <string.h>
/**
 * create_file - Creates a file with specified permissions
 * and writes text content.
 * @filename: The name of the file to create or overwrite.
 * @text_content: The NULL-
 * terminated string to write to the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int result = -1;
	int size = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_EXCL | O_RDWR, 0666);

	if (fd < 0)
	{
		close(fd);
		return (result);
	}
	result = 1;

	if (text_content != NULL)
	{
		size = write(fd, text_content, strlen(text_content));
		if (size < 0)
			result = -1;
	}

	close(fd);
	return (result);
}
