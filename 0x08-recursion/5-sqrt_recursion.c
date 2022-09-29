#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: integer
 * If n does not have a natural square root,
 * the function should return -1
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	return (helper_function(n, 1));
}

/**
 * helper_function - to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int helper_function(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
