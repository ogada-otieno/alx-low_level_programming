#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @c:  is the int that will use for the argument of the function
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
		_putchar (c % 10 + '0');
		return (c % 10);
	}
	else
	{
		c = c * -1;
		_putchar (c % 10 + '0');
		return (c % 10);
	}
}