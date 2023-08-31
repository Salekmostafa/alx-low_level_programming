#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - writes the char
 * @c: char to print
 *
=======
 * _putchar - writes the char 
 * @c: char to print
 * 
>>>>>>> a35b6493991dd6b8734710f8ec9ed24a667ddd5c
 * Return: 1.
 * On error, 1 is returned
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
