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

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');

			_putchar('\n');
		}
	else
		_putchar('\n');
}
