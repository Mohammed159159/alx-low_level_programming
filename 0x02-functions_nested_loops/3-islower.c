#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: character to be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	return (0);
}
