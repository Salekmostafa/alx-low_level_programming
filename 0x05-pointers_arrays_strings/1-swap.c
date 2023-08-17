#include <stdio.h>

/**
* swap_int - swap the value
* @a: input parameter 1
* @b: input parameter 2
* Return: always 0 .
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
