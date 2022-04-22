#include <stdio.h>
/**
 * char - create a char b_hex
 * loops - for loop
 * Return: 0
 */
int main(void)

{
	char b_hex;

	for (b_hex = 48; b_hex <= 57; b_hex++)
	{
		putchar(b_hex);
	}
	for (b_hex = 97; b_hex <= 102; b_hex++)
	{
		putchar(b_hex);
	}

	putchar ('\n');

	return (0);

}
