#include<stdlib.h>
#include<stddef.h>
#include<string.h>
/**
 * _strdup - duplicate a string in a new memory space
 * @str: string to be duplicated
 * Return: pointer to newly allocated memory space, or null if fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = strlen(str);

	if (str == NULL)
		return (NULL);

	dup = malloc(i + 1);

	if (dup == NULL)
		return (NULL);

	while (i--)
		dup[i] = str[i];

	return (dup);
}
