#include<stdlib.h>
#include<stddef.h>

/**
 * _strdup - duplicate a string in a new memory space
 * @str: string to be duplicated
 * Return: pointer to newly allocated memory space, or null if fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	
	dup = malloc(sizeof(str));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
		dup[i] = str[i];

	return (dup);
}
