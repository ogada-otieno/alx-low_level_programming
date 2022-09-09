#include <stdio.h>

/**
 * main - main block
 * Description: prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * printed in ascending order
 * use the putchar function
 * use putchar four times maximum
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
