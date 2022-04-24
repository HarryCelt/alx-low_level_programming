#include "main.h"

/**
* leet - encodes a string into 1337
* @s: string to encode
* Return: s
*/

char *leet(char *s)
{
	int i = 0, k = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'L', 'O', 'T'};
       	char array_low[] = {'a', 'e', 'l', 'o',	't'};

	while (s[i] != '\0')
	{
		for ( k = 0; k < 5; k++)
		{
			if (s[i] == array_low[k] || s[i] == array_up[k])
			{
				s[i] = array_leet[j];
			}
			k++;
		}
		i++;
	}

	return (s);
}
