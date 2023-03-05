#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 *
 * @n: Number of elements to be printed
 * @a: Array of integers
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 1;

	while (i++)
	{
		if (i < n)
			printf("%d, ", *(a + i - 1));
		else
		{	printf("%d\n", *(a + i - 1));
			break;
		}
	}
}
