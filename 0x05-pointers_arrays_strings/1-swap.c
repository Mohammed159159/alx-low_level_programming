#include "main.h"

/**
 * swap_int - swap the values of two integers given their addresses
 *
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return - void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
