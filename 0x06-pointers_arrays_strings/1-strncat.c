#include "main.h"
#include <stdio.h>

/**
 * main - concatenates two stings
 * @s1: A pointer to a character that will be changed
 * @s2: same as above
 * Return: Always 0.
 */
int main(void)
{
	char *_strcat(char *s1, char *s2)
	{
		int i, j;

		i = 0;
		while (s1[i] != '\0')
		{
			i++
		}

		j = 0;
		while (s2[j] != '\0')
		{
			s1[i] =  s2[j];
			j++;
			i++;
		}
		s1[i] = '\0';

		return (s1);
	}

}
