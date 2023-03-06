/**
 * _memset - fill the first n bytes of the memory area pointed to by s with athe constant byte b.
 *
 * @n: Number of bytes to be filled.
 * @s: Pointer to memory area.
 * @b: Byte to fill the memory area with.
 *
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
