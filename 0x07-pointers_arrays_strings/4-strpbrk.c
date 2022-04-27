#include "main.h"

/**
 * _strpbrk - prints buffer in hexa
 * @s: buffer
 * @accept: buffer 2
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; *(s + k); k++)
	{
		for (l = 0; *(accept + l); l++)
		{
			if (*(s + k) == *(accept + l))
			{
				return (s + k);
			}
		}
	}
	return (0);
}
