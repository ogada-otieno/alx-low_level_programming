#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * can only use one if in your code
 * can only use two loops in your code
 * not allowed to use switch
 * not allowed to use any ternary operation
 * Return: encoded string 's'
 */

char *leet(char *s)
{
	int i;
	int j;

	char alpha[80] = "aAeEoOtTlL";
	char numbers[80] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = numbers[j / 2];
			}
		}
	}
	return (str);
}
