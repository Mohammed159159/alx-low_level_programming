#include <stdio.h>

/**
 * print_times_table - print the n times table, starting
 * with 0
 * @n: specified times table
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, next;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				printf("%d", i * j);

				next = i * (j + 1);

				if (next > 99)
					printf(", ");
				else if (next > 9)
					printf(",  ");
				else
					printf(",   ");
			}
			printf("\n");
		}
	}
}
