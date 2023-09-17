#include <stdio.h>

/**
 * jack_bauer - print every minute of the day of Jack Bauer
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{

		for (j = 0; j < 60; j++)
		{
			if (i < 10)
				printf("0");

			printf("%d:", i);

			if (j < 10)
				printf("0");

			printf("%d\n", j);
		}
	}
}
