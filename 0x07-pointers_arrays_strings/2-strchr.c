#include <stdio.h>
/**
 * _strchr - return pointer to 1st occur. of char c or NULL
 *
 * @s: Pointer to string
 * @c: Character to be searched for
 *
 * Return: Pointer to first occur. of char or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
