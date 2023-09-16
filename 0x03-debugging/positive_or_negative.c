#include "main.h"

/**
 * positive_or_negative - determine if n is positive or negative
 * @n: number to be checked
 * Return: sign of a number
 */
void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}

}
