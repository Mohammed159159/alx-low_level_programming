#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*(s + 1) != '\0')
	{
		_puts_recursion(s + 1);
	}
	else {
		_putchar('\n');
	}

}
