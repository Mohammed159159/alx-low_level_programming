#include<stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98 followed
 * by a new line
 * @n: starting integer
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf("%d, ");
	}

	printf("\n");
}
