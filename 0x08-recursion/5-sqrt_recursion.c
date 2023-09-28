/**
 * guess - guesses a number for sqrt and checks it
 * x: number required to find sqrt for
 * g: guess made for sqrt
 * Return: 1 if sqrt, -1 if it is not found
 */
int guess(int x, int g)
{
	if (g * g > x)
		return (-1);

	if (g * g == x)
		return (g);

	return guess(x, g + 1);
}
/**
 * _sqrt_recursion - calculate square root of a perfect square
 * @n: number whose square root is to be calculated
 * Return: square root of n if it is perfect square, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return guess(n, 1);
}
