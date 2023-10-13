#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - print given integers separated with given separator
 * @separator: string to be printed between numbers
 * @n: number of integers to be printed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
