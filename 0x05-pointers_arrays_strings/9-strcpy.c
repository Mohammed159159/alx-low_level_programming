/**
 * _strcpy - copy string pointed to by src, including '\0', to pointer dest.
 *
 * @dest: Destination of copied string.
 * @src: Source of copied string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}
