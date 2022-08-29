#include <stdio.h>
/**
 * main - create a  character alphabet
 * run a for loop on alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	
	putchar('\n');
	
	return (0);
}
