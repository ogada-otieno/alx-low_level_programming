#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: character string
 * @f: function with a pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
