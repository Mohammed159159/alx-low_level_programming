#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_last_digit - print last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: value of last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n;

	printf("%d\n", abs(last_digit));

	if (n > 9)
		last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
