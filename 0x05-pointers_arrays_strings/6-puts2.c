#include "main.h"

/**
 * _puts2 - print every other charachter in a string from 1st charachter
 *
 * @str: pointer to string
 *
 * Return: void
 */

void puts2(char *str)
{
	char *ch;

	for (ch = str; *ch != '\0'; ch++)
	{
		_putchar(*ch);
	}
	_putchar('\n');
}
