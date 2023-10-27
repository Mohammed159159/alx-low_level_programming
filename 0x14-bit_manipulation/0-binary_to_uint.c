#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: converted number | 0 if there is one or more chars
 * in string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (!(*b == '0' || *bb == '1'))
			return (0);

		n = n * 2 + (*b++ - '0');
	}

	return (n);
}
