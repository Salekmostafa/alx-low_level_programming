#include "main.h"

/**
 * _strspn - entry pt
 * @s: input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, n, value;
    value = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        int check = 0;
        
        for (n = 0; accept[n] != '\0'; n++)
        {
            if (accept[n] == s[i])
            {
                value++;
                check = 1;
                break;
            }
        }

        if (check == 0) {
            break;
        }
    }
    
    return value;
}
