#include "main.h"

/**
 * clear_bit - set the value of a bit to o at specified index
 * @n: unsigned long to convert
 * @index: index to change to zero
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int converter;

	if (index > 63 || !n)
		return (-1);
	converter = 1 << index;
	*n = (*n & ~converter) | ((0 << index) & converter);
	return (1);
}
