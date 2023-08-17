#include "main.h"

/**
 * print_triangle - print a trg
 *
 * @size: size of the trg
 *
 * Return: always 0
*/

void print_triangle(int size)
{
	int h, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((h + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
