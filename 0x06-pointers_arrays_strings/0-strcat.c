#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string pointer.
 * @src: Source string pointer.
 * Return: Pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
    int length_of_dest, z;

    length_of_dest = 0;
    while (dest[length_of_dest] != '\0')
        length_of_dest++;

    for (z = 0; src[z] != '\0'; z++, length_of_dest++) {
        dest[length_of_dest] = src[z];
    }
    dest[length_of_dest] = '\0';

    return dest;
}
