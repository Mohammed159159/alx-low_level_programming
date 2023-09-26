#include <stdio.h>
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
	int i, s1 = a[0], s2 = a[size - 1];

	if (size == 0)
		return;
	for (i = 1; i < size; i++)
	{
		s1 += a[i * size + i];
		s2 += a[(i + 1) * size - i - 1];
	}

	printf("%d, %d\n", s1, s2);
}
