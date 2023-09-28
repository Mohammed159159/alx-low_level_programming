/**
 * factorial - calculate factorial of given number
 * @n: number whose factorial is to be calculated
 * Return: n! or -1 if n is < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
