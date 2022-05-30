#include "main.h"

/**
 * binary_to_uint - converts from 0b to unsigned int
 * @b: binary number
 * Return: unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, base;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;
	len--;
	for (base = 1, uint = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			base *= 2;
			continue;
		}
		else if (b[len] == '1')
		{
			uint += base;
			base *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
