#include<unistd.h>
#include<stdio.h>
/*
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(quote, strlen(quote));

	return (1);
}
