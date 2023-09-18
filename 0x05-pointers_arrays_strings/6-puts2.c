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
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}

	_putchar('\n');
}

