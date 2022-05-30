#include "main.h"

/**
 * get_bit - returns the value of a bit 
 * @n: unsigned long int to search
 * @index: index to return bit
 * Return: n or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
