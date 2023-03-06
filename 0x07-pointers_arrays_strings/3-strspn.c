#include <stdio.h>
/**
 * _strspn - return number of chars matching accept
 *
 * @s: Pointer to string
 * @accept: Characters to be accepted
 *
 * Return: Number of chars accepted
 */
unsigned int *_strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

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
