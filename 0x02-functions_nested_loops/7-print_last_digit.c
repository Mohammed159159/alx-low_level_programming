#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: value of last digit of n
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
}
