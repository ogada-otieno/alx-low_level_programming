#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root
 * @n: integer
 * If n does not have a natural square root,
 * the function should return -1
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt(n, (n + 1) / 2));
}

/**
 * sqrt - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */

int sqrt(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt(n, i - 1));
}
