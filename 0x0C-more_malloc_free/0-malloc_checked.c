#include <stdlib.h>

/**
 * malloc_checked -  allocate memory according to a specified param
 * @b: size of memory to be allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}
