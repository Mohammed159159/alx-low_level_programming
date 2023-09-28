/**
 * check - checks if a number is prime against a certain divisor
 * @x: number to be tested
 * @d: testing divisor
 * Return: 1 if prime, 0 otherwise
 */
int check(int x, int d)
{
	if (d * d > x)
		return (1);

	if (x % d == 0)
		return (0);

	d++;
	return (check(x, d));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);

	return (check(n, 2));
}
