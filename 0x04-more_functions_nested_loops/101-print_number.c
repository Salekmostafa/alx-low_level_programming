#include "main.h"

/**
* print_number -- print an integer
*
* @n: the nteger
* Return: alws 0
*/

void print_number(int n)
{
	unsigned int num = n;

	/*first*/
	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('_');
	}
	num /= 10;
	if (num != 0)
		print_number(num);
	_putchar((unsigned int) n % 10 + '0');
}
