#include "main.h"

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
 * append_text_to_file - Appends text content to a file or creates a new file
 *                      if it doesn't exist.
 *
 * @filename: The name of the file to which the text should be appended.
 * @text_content: The text content to be appended to the file.
 *
 * Return:
 *   - 1 if the operation is successful.
 *   - -1 if there's an error (e.g., the file cannot be opened or written to).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	size_t size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0777);
	if (fd == -1)
		return (-1);

	len = _strlen(text_content);
	if (len)
		size = write(fd, text_content, len);

	close(fd);
	return (size  ? 1 : 1);
}
