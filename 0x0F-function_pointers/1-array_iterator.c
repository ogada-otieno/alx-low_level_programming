#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array
 * @size: the size of the array
 * @action: pointer to the function to be used
 * @array: array to iterate
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
