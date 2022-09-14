#include "main.h"

/**
 * print_alphabet - function
 * Description: prints the alphabet, in lowercase, followed by new line
 * Return: 0
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
