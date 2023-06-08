/**
 * powerCalculation - Computes the square root of a number using recursion
 *
 * @n: The input number
 * @k: The current guess
 *
 * Return: The square root of n, or -1 if n has no natural square root.
 */
int powerCalculation(int n, int k)
{
	if (k * k == n)
		return (k);
	if (k * k > n)
		return (-1);
	return (powerCalculation(n, k + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number recursively.
 *
 * @n: The input number.
 *
 * Return: The natural square root of n, or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (powerCalculation(n, 0));
}

