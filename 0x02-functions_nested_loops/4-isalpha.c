#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter
 * @c: The int to print
 * Return: 0
 */

int _isalpha(int c);

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
