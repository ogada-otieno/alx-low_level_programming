#include <stdio.h>
/**
 * main - main block
 * Description: prints single digit numbers of base 10 starting from 0
 * char not allowed
 * use putchar twice
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
