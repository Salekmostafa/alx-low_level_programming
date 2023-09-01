#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function to print
 * @s: pointer 
 * Return: void
*/

void _puts_recursion(char *s) {
    if (*s == '\0') {
        putchar('\n');
        return;
    }
    else
    {
        _puts_recursion(s + 1);
        putchar(*s);
    }
}
