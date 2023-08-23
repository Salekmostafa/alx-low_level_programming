#include "main.h"

/**
* _strncat - a function
* @dest: pointer to destiination input
* @src: pointer to source input
* @n: most number of bytes from &src
* Return: &dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	i = 0;

	c = 0;

	while (dest[i++])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
