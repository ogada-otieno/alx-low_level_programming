#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 1 if error, 0 if function runs correctly
 */

int main(int argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
