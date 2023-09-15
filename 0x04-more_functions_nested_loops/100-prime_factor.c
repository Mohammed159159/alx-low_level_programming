#include<stdio.h>

/**
 * main - find prime factor of given number
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143, largest_prime_factor, i;

	for (i = 2; i * i <= num; i++)
	{
		while (num % i == 0)
		{
			largest_prime_factor = i;
			num = num / i;
		}
	}

	if (num > 1)
		largest_priem_factor = num;

	printf("%ld\n", largest_prime_factor);

	return (0);
}
