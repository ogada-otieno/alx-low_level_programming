#include "main.h"

/**
 * malloc_checked - allocs memory using malloc
 * @b: unsigned integer
 * @a: pointer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	free(a);

	return (a);
}
