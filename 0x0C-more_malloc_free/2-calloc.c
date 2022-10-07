#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: Null or pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;

	ar = malloc(sizeof(nmemb) * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ar == NULL)
		return (NULL);
	free(ar);

	return (ar);
}
