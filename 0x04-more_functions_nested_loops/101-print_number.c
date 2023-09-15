#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num = n, last_digit;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}

	if (num / 10 > 0)
		print_number(num / 10)

	last_digit = num % 10;
	_putchar((unsigned int)last_digit + '0');
}

