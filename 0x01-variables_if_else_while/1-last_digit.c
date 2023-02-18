#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: last digit of a number followed by details and exit 0 (Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d and ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("is greater than 5");
	} else if (lastDigit == 0)
	{
		printf("is 0");
	} else if (lastDigit < 6)
	{
		printf("is less than 6 and not 0");
	}

	putchar('\n');

	return (0);
}
