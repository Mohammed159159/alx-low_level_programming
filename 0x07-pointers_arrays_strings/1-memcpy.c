/**
 * _memcpy - copy the first n bytes form src to dest.
 *
 * @n: Number of bytes to be copied.
 * @src: Pointer to source.
 * @dest: Pointer to destination.
 *
 * Return: Pointer to copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
