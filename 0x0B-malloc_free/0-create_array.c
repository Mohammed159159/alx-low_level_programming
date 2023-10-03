#include<stdlib.h>
#include<stddef.h>
/**
 * create_array - create an array of char initialized with
 * a specific char
 * @size: size of array
 * @c: special char
 * Return: array of char initialized with a specific char
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
