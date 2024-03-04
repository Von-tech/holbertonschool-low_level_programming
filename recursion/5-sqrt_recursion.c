#include "main.h"

/* Forward declaration */
int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n.
 *         -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Helper function to find the square root using recursion.
 * @n: The number to find the square root of.
 * @i: The current value to check.
 *
 * Return: The square root of n.
 *         -1 if n does not have a natural square root.
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (find_sqrt(n, i + 1));
}

