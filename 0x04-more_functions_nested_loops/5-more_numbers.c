#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(49);
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
