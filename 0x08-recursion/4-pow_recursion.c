#include "main.h"

/**
 * _pow_recursion - function that returns the value of x^y
 * @x: integer base
 * @y: integer exponent
 * @r: integer result
 * If y is lower than 0, the function should return -1
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	int r = _pow_recursion(x, y);

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (r);
}
