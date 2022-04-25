#include "main.h"

/**
 * _strncpy - copy string
 * @dest: array returns
 * @src: a pointer that accepts string
 * @n: number of times to iterate
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i =  i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
		dest[i] = '\0';
		i++;
	}
