#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the number of arguments
 * passed into it
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
