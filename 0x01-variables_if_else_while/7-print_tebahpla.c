#include <stdio.h>
/**
 * print - numbers from 122 - 97
 * loop - for loop to decrement
 * return: 0
 */

int main(void)
{
	char alph;

	for (alph = 122; alph >= 97; alph--)
	{
		putchar(alph);
	}

	putchar('\n');

	return (0);

}
