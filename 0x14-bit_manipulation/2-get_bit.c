#include "main.h"

/**
 * get_bit - returns the value of a bit 
 * @n: unsigned long int to search
 * @index: index to return bit
 * Return: bitValue
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) &1;

	return (bitValue);
}
