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

	k = 0;
	while (k < size)
	{
		count_1 = count_1 + *(a + k * size + k);
		count_2 = count_2 + *(a + k * size - k - 1);

		k++;
	}

	printf("%i, %i\n", count_1, count_2);

}
