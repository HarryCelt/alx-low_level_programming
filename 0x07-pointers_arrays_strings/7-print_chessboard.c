#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 * Retun: 0
 */
void print_chessboard(char (*a)[8])
{
	int k, l;

	k = 0;
	while (k < 8)
	{
		l = 0;
		while (l < 8)
		{
			_putchar (a[k][l]);
			l++;
		}
		_putchar ('\n');
		k++;
	}
	return (0);
}
