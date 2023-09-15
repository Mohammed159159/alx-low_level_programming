#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num = n, i, last_digit;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	for (i = 1; i < num / 10; i *= 10)
		;
	for (; i > 0; i /= 10)
	{
		last_digit = num / i % 10;
		_putchar((unsigned int)last_digit + '0');
	}
}

