#include "main.h"

/**
 * print_rev - print reversed string
 *
 * @s: pointer string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = _strlen(s);

	for (length; length >= 0; length--)
	{
		_putchar(*(s + length));
	}
}
