/**
 * len - calculates length of string excluding null char
 * @s: string whose length is to be calculated
 * Return: length of string
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + len(s + 1));
}
/**
 * comp - compare two chars that are equivilant in index in a string
 * @s: string to be compared
 * @l: length of string excluding null char
 * @i: index of comparison
 * Return: 1 if the two strings match, 0 otherwise
 */
int comp(char *s, int l, int i)
{
	if (*(s + i - 1) != *(s + l - i))
		return (0);

	if (l - i <= l / 2)
		return (1);

	i++;
	return (comp(s, l, i));
}
/**
 * is_palindrome - check if a string is palindrome
 * @s: string to be checked
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int l = len(s);

	if (*s == '\0')
		return (1);

	return (comp(s, l, 1));
}
