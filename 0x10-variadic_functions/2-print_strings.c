#include "variadic_functions.h"

/**
 * print_strings - prints numbers
 * @n: number of strings passed to the function
 * @separator: pointer to the string to be printed between strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	char *str;

	va_start(params, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		str = va_arg(params, char *);
		if (!separator)
			printf("%s", str ? str : "(nil)");
		else
			printf("%s%s", str ? str : "(nil)", separator);
	}

	if (n)
	{
		str = va_arg(params, char *);
		printf("%s\n", str ? str : "(nil)");
	}
	else
	{
		printf("\n");
	}

	va_end(params);
}
