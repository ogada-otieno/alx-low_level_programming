#include "main.h"

/**
 * main - entry block
 * Description: function that prints the alphabet, in lowercase, followed by a new line
 * Prototype: void print_alphabet(void);
 * only use _putchar twice in your code
 * Return: 0
 */
void print_alphabet(void)
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
