#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * If y is lower than 0, the function should return -1
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	_pow_recursion(x, y);
	return (x, y);
}
