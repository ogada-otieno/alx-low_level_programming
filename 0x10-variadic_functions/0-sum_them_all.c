#include "variadic_functions.h"

/**
 * sum_them_all - Sum all parameters
 * @n: const unsigned int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...);
{
	va_list mynumbers;

	unsigned int i;
	int sum = 0;

	va_start(mynumbers, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(mynumbers, int);
	}

	va_end(mynumbers);

	return (sum);
}
