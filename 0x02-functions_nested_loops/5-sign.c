#include "main.h"

/**
 * print_sign - when letter is
 * lowercase = 0, uppercase = 1
 * @n: the int to print
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else
	{
		_putchar ('-');
		return (0);
	}

}
