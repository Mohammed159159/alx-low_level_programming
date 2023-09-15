#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int i, last_digit;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	for (i = 1; i < n / 10; i *= 10)
		;
	for (; i > 0; i /= 10)
	{
		last_digit = n / i % 10;
		_putchar(last_digit + 48 + '0');
	}
}

