#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @src: buffer
 * @dest: buffer 2
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

