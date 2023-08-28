#include "main.h"

/**
 * _strspn - Entry pt
 * @s: input
 * @accept: input
 * Return: Always 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\n'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\n'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}

	return (value);
}
