#include <stdio.h>

/**
 *
 * main - Prints the size of data types
 *
 * Return: 0
 */
int main(void)
{

	printf("Size of a char is: %ld byte(s)\n", sizeof(char));

	printf("Size of an int is: %ld bytes(s)\n", sizeof(int));

	printf("Size of a long int is: %ld byte(s)\n", sizeof(long int));

	printf("Size of a long long int is: %ld byte(s)\n", sizeof(long long int));

	printf("Size of a float is: %ld byte(s)\n", sizeof(float));

	return (0);
}
