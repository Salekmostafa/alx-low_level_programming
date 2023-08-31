#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: void
 */

void print_diagsums(int *a, int size) {
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < size * size; i = i + size + 1) {
        sum1 = sum1 + a[i];
    }
    for (int n = size - 1; n < size * size; n = n + size - 1) {
        sum2 = sum2 + a[n];
    }
    printf("Sum of diagonal 1: %d\n", sum1);
    printf("Sum of diagonal 2: %d\n", sum2);
}

