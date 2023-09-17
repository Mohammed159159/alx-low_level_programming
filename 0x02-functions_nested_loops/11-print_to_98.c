#include<stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98 followed
 * by a new line
 * @n: starting integer
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i, step = 1;

	if (n > 98)
		step = -1;
		
	for (i = n; i != 98; i += step)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}

	printf("98\n");
}
