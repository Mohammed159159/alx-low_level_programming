#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char string[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n', '0'};
	int i;

	for (i = 0; string[i] != '0'; i++)
	{
		_putchar(string[i]);
	}
	return (0);
}
