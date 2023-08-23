#include <stdio.h>
#include "main.h"

/**
 * main - entry pt
 * description: prints the nmbrs
 * Fizz for 3
 * Return: always 0
*/

int main(void)
{
	in i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz")
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}