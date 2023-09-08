#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Comma-separated list of numbers and 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{

		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				if (k > i)
				{
					l = 48;
				} else
				{
					l = j + 1;
				}

				for (; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != i - 1 || k != i || l != k)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}

	putchar('\n');

	return (0);
}
