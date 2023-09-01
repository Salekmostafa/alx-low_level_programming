#include <stdio.h>
#include "main.h"

/**
* _puts_recursion - function to print a string recursively
* @s: pointer to the string to be printed
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}
	else
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
}

