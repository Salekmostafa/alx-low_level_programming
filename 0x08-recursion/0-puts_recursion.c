#include "main.h"

/**
 * _puts_recursion - function to print
<<<<<<< HEAD
 * @s: pointer
=======
 * @s: pointer 
>>>>>>> a35b6493991dd6b8734710f8ec9ed24a667ddd5c
 * Return: void
*/

void _puts_recursion(char *s) {
    if (*s == '\0') {
        putchar('\n');
        return;
    }
    else
    {
        putchar(*s);
        _puts_recursion(s + 1);
    }
}
