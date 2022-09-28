#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * @i: integer
 * If y is lower than 0, the function should return -1
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	i = _pow_recursion(x, y);
	return (i);
}
