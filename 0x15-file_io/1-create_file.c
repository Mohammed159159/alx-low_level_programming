#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);

	for (i = 0; s[i]; i++)
		;

	return (i);
}

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: string to write in the file
 * Return: 1 on success | -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0, len = _strlen(text_content);
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);

	close(fd);

	return (bytes == len ? 1 : -1);
}
