#include "main.h"

/**
 * print_times_table - print times_table from 0 - 100
 * @n: starting int
 * Return: 0
 */

void print_times_table(int n)
{
	int a = 0;

	if (n > 0 && n < 15)
	{
		while (a < n)
		{
			int b = 1;

			_putchar('0');
			while (b <= n);
			{
				int p = a * b;

				_putchar(',');
				_putchar(' ');
				if (p < 10);
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p > 99)
				{
					_putchar('');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
