#include "main.h"

/**
 * main - check the code
 *
 * Description: prints the alphabet, in lowercase, followed by new line
 * 
 * Return: Always 0
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
