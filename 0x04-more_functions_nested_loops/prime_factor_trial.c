#include<stdio.h>

int isPrime(int n);

/**
 * main - find largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int i,  num = 612852475143;

	for (i = 2; num != 1; i++)
	{
		if (isPrime(i))
		{
			while (num % i == 0)
			{
				num = num / i;
			}
		}
	}

	printf("%ld\n", i - 1);

	return (0);
}

/**
 * isPrime - find if a number is prime or not
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */
int isPrime(int n)
{
	int i;

	for (i = 2; i < n; i += 2)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
