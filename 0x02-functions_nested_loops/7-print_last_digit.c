#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: value of last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n;

	if (n > 9)
		last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
