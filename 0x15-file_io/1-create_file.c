#include "main.h"
#include <string.h>
/**
 * _strlen - return the length of a string.
 * @str: pointe that point to the first char of the var str.
 * Return: the size of the string .
 */


unsigned int _strlen(char *str)
{
	if (*str == '\0')
		return (1);
	return (1 + _strlen(str + 1));
}

/**
 *  * create_file - Creates a file with specified permissions
 *   * and writes text content.
 *    * @filename: The name of the file to create or overwrite.
 *     * @text_content: The NULL-
 *      * terminated string to write to the file (can be NULL).
 *       *
 *        * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = 0;
	ssize_t len;

	len = _strlen(text_content);
	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (len > 0)
		size = write(fd, text_content, len);
	close(fd);
	if (len != size)
		return (-1);

	return (1);
}
