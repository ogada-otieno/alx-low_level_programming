#include <stdio.h>
#include "main.h"

/**
 * *_strcat - function appends the src string to the dest string
 * @dest: string char to append to
 * @src: source string char
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	
	return (dest);
}
