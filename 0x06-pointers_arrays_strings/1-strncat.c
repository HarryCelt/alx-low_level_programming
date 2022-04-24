#include "main.h"

/**
 * _strncat - concatenates two stings
 * @dest: A pointer to a character that will be changed
 * @src: same as above
 * @n: the number of bytes to use from src.
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && n > k)
	{
		dest[i] =  src[j];
		j++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
