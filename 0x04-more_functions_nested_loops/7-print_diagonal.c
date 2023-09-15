#include "main.h"

/**
 * print_diagonal - draw a diagonal ine on the terminal
 * @n: number of times char \ should be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');

		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\n');
	}
}
