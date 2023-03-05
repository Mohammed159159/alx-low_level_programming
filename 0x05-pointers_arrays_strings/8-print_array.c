#include "main.h"

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

	while (i++)
	{
		if (*(a + i + 1) != '\0')
			printf("%d, ", *(a + i));
		else
		{	printf("%d", *(a + i));
			break;
		}
	}
}
