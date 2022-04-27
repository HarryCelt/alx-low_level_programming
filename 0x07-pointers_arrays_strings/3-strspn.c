#include "main.h"
/**
 * _strspn - prints buffer in hexa
 * @s: buffer
 * @accept: buffer 2
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, l;

	for (k = 0; s[k] != 0; k++)
	{
		for (l = 0; accept[l] != 0; l++)
		{
			if (s[k] == accept[l])
				break;
		}
		if (!(accept[l]))
			break;
	}
	return (k);
}
