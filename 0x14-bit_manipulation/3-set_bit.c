#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 in a given base
 * @n: unsigned long to change
 * @index: index to change to one
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
