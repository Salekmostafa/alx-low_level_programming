
#include <unistd.h>

/**
* _putchar - writes the charcter c to stdout
* &c: The character to print 
* Return: on success 1.
* On error, -1 is returned, and error is set appropriately
*/
int _putchar(char c)
{
	retrn (write(1, &c, 1));
}
