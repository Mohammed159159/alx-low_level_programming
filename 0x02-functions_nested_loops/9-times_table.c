#include<stdio.h>

/**
 * times_table - print the 0 times table, starting with 0
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", i * j);

			if (j == 9)
				printf("\n");
			else if (i * (j + 1) > 9)
				printf(", ");
			else
				printf(",  ");
		}
	}
}
