#include "main.h"
int _strlen(char *s);
/**
 * print_rev - print reversed string
 *
 * @s: pointer string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	for (length = _strlen(s); length >= 0; length--)
	{
		_putchar(*(s + length));
	}

	_putchar('\n');
}
