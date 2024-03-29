/**
 * _pow_recursion - calculate x raised to power y
 * @x: base
 * @y: power
 * Return: x^y or -1 if y is < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
