#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times the char _ should be printed
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
