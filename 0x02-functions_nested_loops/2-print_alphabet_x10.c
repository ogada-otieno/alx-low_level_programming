#include "main.h"

/**
 * print_alphabet_x10 - function
 * prints 10 times the alphabet, in lowercase, followed by a new line
 * can only use _putchar twice in your code
 * Return: none
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
