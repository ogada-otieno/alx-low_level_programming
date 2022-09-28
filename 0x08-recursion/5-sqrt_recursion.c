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
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
