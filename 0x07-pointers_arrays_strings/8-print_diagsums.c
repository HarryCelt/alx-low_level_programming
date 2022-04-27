#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 * of a square matrix
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int k;
	int count_1 = 0;
	int count_2 = 0;

	for (k = 0; k < (size * size); k++)
	{
		if (k % (size + 1) == 0)
			count_1 += *(a + k);
		if (k % (size - 1) == 0 && k != 0 && k < size * size - 1)
			count_2 += *(a + k);
	}
	printf("%d, %d\n", count_1, count_2);
}
