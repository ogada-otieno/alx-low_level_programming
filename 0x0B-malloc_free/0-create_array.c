#include "main.h"

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: 0 or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
