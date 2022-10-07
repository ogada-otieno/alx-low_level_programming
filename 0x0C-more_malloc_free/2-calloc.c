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
	unsigned int i;

	ar = malloc(sizeof(nmemb) * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ar[i] = 0;
	free(ar);

	return (ar);
}
