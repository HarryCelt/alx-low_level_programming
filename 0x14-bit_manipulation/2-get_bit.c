#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int, the starting point
 * @index: index to return bit
 * Return: bit Value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
