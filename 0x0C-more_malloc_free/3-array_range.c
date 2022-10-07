#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min value int
 * @max: max value int
 * If min > max, return NULL
 * If malloc fails, return NULL
 * order from min - max
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int temp;
	int n;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	ar = malloc(n * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (min = 0; min < n; min++)
	{
		for (max = min + 1; max < n; max++)
		{
			if (ar[min] < ar[max])
			{
				temp = ar[min];
				ar[min] = ar[max];
				ar[max] = temp;
			}
		}
	}

	return (ar);
}
