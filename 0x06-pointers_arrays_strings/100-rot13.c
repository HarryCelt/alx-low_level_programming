#include "main.h"

/**
 * rot13 -encodes a string in rot13
 * @s: string to be encoded
 * 
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;

	char cap1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cap2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; cap1[j] != '\0'; j++)
		{
			if (s[i] == cap1[j])
			{
				s[i] = cap2[j];
				break;
			}
		}
	}

	return (s);
}
