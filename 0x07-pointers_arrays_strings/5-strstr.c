#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for sub-string
 * @needle: the sub-string
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int  k = 0, j = 0;

	while (haystack[k])
	{
		while (needle[j] && (haystack[k] == needle[0]))
		{
			if (haystack[k + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			k++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
