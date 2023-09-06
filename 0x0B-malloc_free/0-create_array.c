#include "main.h"

/**
* *create_array - creates an arr of chars.
* @size: size of array
* @c: char to initialize
* Return: ....
*/

char *create_array(unsigned int size, char c)
{
char *n = malloc(size);
if (size == 0 || n == 0)
return (0);
while (size--)
n[size] = c;
return (0);
}
