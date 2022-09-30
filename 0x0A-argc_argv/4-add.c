#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * no number is passed to the program, print 0
 * If one of the numbers contain non-digits, print Error
 * Return: 1 if error, 0 if function runs properly
 */

int main(int argc, char *argv[])
{
	int total;
	int i;
	int num;
	char *p;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
