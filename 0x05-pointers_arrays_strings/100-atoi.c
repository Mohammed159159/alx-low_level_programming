/**
 * _atoi - convert string into integer considering + and - and ignoring chars
 *
 * @s: String to be converted
 *
 * Return: Extracted number from string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int n = 0;
	char *ch;

	while (++i)
	{
		ch = s + i - 1;

		if (*ch == '\0')
			break;

		if (*ch == '-')
		{
			sign *= -1;
		}

		else if (*ch >= '0' && *ch <= '9')
		{
			n *= 10;
			n += *ch - 48;

			if (*(ch + 1) < '0' || *(ch + 1) > '9')
				break;
		}
	}

	return (n * sign);
}
