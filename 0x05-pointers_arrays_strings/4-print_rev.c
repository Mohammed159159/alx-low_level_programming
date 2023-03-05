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
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	;
	while (i-- > 0)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
