#include<stdio.h>

/**
 * times_table - print the 0 times table, starting with 0
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i *j;

			printf("%d", res);

			if (j == 9)
				printf("\n");
			else if (res > 9)
				printf(", ");
			else
				printf(",  ");
		}
	}
}
