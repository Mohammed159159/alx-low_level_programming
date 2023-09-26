#include <stdio.h>
/**
 * _strpbrk - return pointer to 1st occur. of any of bytes in accept or NULL
 *
 * @s: Pointer to string
 * @accept: Characters to be searched for
 *
 * Return: Pointer to first occur. of any bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}

	}

	return (NULL);
}
