#include "main.h"

/**
 * main - main block
 * Description: prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	char string [] = '_putchar\n';
	int count = 0;

	while (string[count] != '\0')
	{
		_putchar(string[count]);
		count++;
	}
	return(0);
}
