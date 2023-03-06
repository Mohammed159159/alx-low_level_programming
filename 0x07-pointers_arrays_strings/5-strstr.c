#include <stdio.h>
/**
 * _strstr - find first occurence of substring in a string
 *
 * @haystack: Pointer to string
 * @needle: Pointer to subbstring
 *
 * Return: Pointer to beginning of substring, otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	int isFound = 0;

	if (!*needle)
		return (haystack);
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			isFound = 1;
			for (j = 1; *(needle + j) != '\0'; j++)
			{
				if (*(haystack + i + j) != *(needle + j))
				{
					isFound = 0;
					break;
				}
			}

			if (isFound)
				return (haystack + i);
		}
	}

	return (NULL);
}
