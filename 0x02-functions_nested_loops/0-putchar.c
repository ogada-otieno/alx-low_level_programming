#include "main.h"

/**
 * main - main block
 * Description: prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
