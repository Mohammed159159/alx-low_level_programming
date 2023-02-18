#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Alphabet in lower casse and 0 (Success)
 */

int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		putchar("%c", i);
	}

	putchar("\n");

	return (0);
}
