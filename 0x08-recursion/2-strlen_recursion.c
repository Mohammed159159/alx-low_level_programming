/**
 * _strlen_recursion - calculate length of string
 * @s: string whose length is to be calculated
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
