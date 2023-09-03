#include "main.h"
#include <stdio.h>

int check_prime(int n, int m);

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}

/**
 * check_prime - helper function to check for primality
 * @n: integer to check
 * @m: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int m)
{
if (m * m > n)
return (1);
if (n % m == 0)
return (0);
return (check_prime(n, m + 1));
}
