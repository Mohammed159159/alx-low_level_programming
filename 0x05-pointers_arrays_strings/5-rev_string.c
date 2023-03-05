/**
 * rev_string - reverse a string maintaining its pointer
 *
 * @s: String to be reversed
 *
 * Return: 0 for success 1 for failure
 */

void rev_string(char *s)
{
	int i, j;
	char *a, *b;

	for (i = 0; *(s + i) != '\0'; i++)
	;

	for (j = 0; j <= i / 2 - 1; j++)
	{
		a = s + j;
		b = s + i - 1 - j;

		*a = *a ^ *b;
		*b = *a ^ *b;
		*a = *a ^ *b;
	}

}
