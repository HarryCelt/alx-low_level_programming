#include "main.h"

/**
 * _strcmp - compare two strings
 * @dest: string 1
 * @src: string 2
 * Return: cmp
 */

int _strcmp(char *dest, char *src)
{
	int i = 0, cmp = 0;

	while (dest[i] != '\0' && src[i] != '\0' && cmp == 0)
	{
		cmp = dest[i] - src[i];
		i++;
	}

	return (cmp);
}
