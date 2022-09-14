#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: integer input
 * Return: absolute value of i
 */
int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
