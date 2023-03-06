/**
 * set_string - set value of pointer to char.
 *
 * @s: Pointer to pointer of string.
 * @to: Value to be set to.
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = *s ^ to;
	to = *s ^ to;
	*s = *s ^ to;
}
