#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * calc_words - calcuate no words
 * and lenght of each word in a string
 * @str: string of interest
 * @len: length of string
 * Return: array of int; first element is no words;
 * rest is pairs of indices; first index indicates start
 * of word; second index indicates end of word
 */
int *calc_words(char *str, int len)
{
	int i, *arr, n = 0;

	arr = malloc(len * sizeof(int));

	for (i = 0; i < len; i++)
		if ((str[i] == ' '|| str[i] != '\0') 
			&& str[i - 1] != ' ')
		{
			n++;
		}

	free(arr);
	
	return (n);
}
/**
 * strtow - split a string into words
 * @str: string to be split
 * Return: split string
 */
char **strtow(char *str)
{
	char *word, **words, no_words, no_letters, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	if (len == 0)
		return (NULL);

	no_words = calc_words(str);
	words = malloc(no_words + 1);
	words[no_words] = NULL;
	
	//for i + 1 < no_words[0]:
		//use number of words by i2 - i1 + 1
		//alloc memory for word
		//add word to words
		//free word
}
