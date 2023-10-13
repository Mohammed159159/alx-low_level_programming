#include <stdarg.h>

/**
 * sum_them_all - sum provided integers
 * @n: number of integers to be summed
 * Return: sum of the provided integers or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
	{
		va_end(ptr);

		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
