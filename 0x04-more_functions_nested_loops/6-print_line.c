#include "main.h"

/**
 * print_line - print a str lin
 *
 * @n: is the number of times
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 1; x <= n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
