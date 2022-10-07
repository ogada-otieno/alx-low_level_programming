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

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ar = malloc(sizeof(nmemb) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ar[i] = 0;

	return (ar);
}