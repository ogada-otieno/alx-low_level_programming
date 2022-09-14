#include "main.h"

/**
 * _islower - function that checks for lowercase characte
 * Return: 0 and 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
