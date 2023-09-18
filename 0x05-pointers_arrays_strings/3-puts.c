#include "main.h"

/**
 * _puts - print string
 *
 * @str: pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	char *ch;

	for (ch = str; *ch != '\0'; ch++)
	{
		_putchar(*ch);
	}
	_putchar('\n');
}
