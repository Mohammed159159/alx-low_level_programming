#include <stdio.h>
/**
 * _strspn - return number of chars matching accept
 *
 * @s: Pointer to string
 * @accept: Characters to be accepted
 *
 * Return: Number of chars accepted
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, yes = 0, prev = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		prev = yes;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				yes++;
		}

		if (prev == yes)
			break;
	}

	return (yes);
}
