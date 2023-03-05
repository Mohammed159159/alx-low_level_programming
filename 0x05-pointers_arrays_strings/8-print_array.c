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
	int i = 0;

	while (1)
	{
		if (n <= 0)
		{
			printf("\n");
			break;
		}
		if (i + 1 < n)
			printf("%d, ", *(a + i));
		else
		{	printf("%d\n", *(a + i));
			break;
		}
		i++;
	}
}
