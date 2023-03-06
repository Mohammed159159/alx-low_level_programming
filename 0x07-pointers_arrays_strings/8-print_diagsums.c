#include "main.h"
/**
 * print_diagsums - print the sum of the two diags of n^2 matrix
 *
 * @a: Pointer to matrix
 * @size: Size of the matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	unsigned int s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i][i];
		s2 += a[i][size - i - 1]
	}

	_putchar(s1);
	_putchar(',');
	_putchar(' ');
	_putchar(s2);
}
