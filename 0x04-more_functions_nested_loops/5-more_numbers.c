#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * use _putchar three times in your code
 * Return: 0
 */
void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
