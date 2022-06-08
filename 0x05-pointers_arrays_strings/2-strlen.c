#include "main.h"

/**
 * -strlen -length of a string
 *  @s: A pointer to an int that will be changed/updated
 *  Return: void that means our is correct
 */

int -strlen(char *s)
{
	int u;
	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}

	
