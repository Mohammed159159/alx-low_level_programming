#include<stdio.h>

/**
 * main - answer to Fizz-Buzz test
 *
 * Return: nothing
 */
int  main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		if (i != 100)
			printf(" ");

	}

	printf("\n");
	return (0);
}
