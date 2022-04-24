#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @st: string to modify
 *
 * Return: st
 */

char *string_toupper(char *st)
{
	int i = 0;

	while (st[i] != '\0')
	{
		if (st[i] > 96 && st[i] < 123)
		{
			st[i] -= 32;
		}
		i++;
	}
	
	return (st);
}
