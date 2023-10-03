#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat - concatenates two strings in
 * a new location
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated memory space of
 * the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, i1, i2;

	if (s1 == NULL)
		i1 = 0;
	else
		i1 = strlen(s1);

	if (s2 == NULL)
		i2 = 0;
	else
		i2 = strlen(s2);

	s3 = malloc(i1 + i2 + 1);

	if (s3 == NULL)
		return (NULL);

	i = i1;
	while (i--)
		s3[i] = s1[i];

	i = i2;
	while (i--)
		s3[i + i1] = s2[i];

	return (s3);
}
