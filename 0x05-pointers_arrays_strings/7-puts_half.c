#include "main.h"

/**
 * puts_half - print second half of a string
 *
 * @str: String to be used
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; *(str + i) != '\0'; i++)
	;

	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;

	for (i = i - n; *(str + i) != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');

}
