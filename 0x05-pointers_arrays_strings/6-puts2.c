#include "main.h"

/**
 * puts2 - print every other charachter in a string from 1st charachter.
 *
 * @str: Pointer to string to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	char *ch;

	for (ch = str; *ch != '\0'; ch += 2)
	{
		_putchar(*ch);
	}

	_putchar('\n');
}

