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
	int function(int root, int square);
	return (function(0, n));
}
/**
 * function - function gets square argument and returns the root
 * @root: root argument
 * @square: square being determined
 * Return: root
 */
int function(int root, int square)
{
	if (root * root == square)
		return (root);
	if (root * root > square)
		return (-1);
	return (function((root + 1), square));
}
