#include "main.h"

/**
 * cap_string - capitalise all words of a string
 * @s: string to use
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 1, j, chk;
	char a[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (s[0] > 96 && s[0] < 123)
	{
		s[0] -= 32;
	}

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			j = 0;
			chk = 0;
			while (chk == 0 && j < 13)
			{
				if (s[i - 1] == a[j])
				{
					chk = 1;
				}
				j++;
			}
			if (chk == 1)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
