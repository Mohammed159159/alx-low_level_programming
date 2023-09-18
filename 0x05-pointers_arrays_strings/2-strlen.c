#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: a pointer to the string
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	char ch;
	int i;

	for (ch = *s, i = 1; ch != '\0'; i++)
	{
		ch = *(s + i);
	}

	return (i - 1);
}
