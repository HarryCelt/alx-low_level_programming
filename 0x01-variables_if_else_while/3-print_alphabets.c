#include <stdio.h>
/**
 * main - create char lower_case and upper_case
 * run a for loop
 * Return: 0
 */
int main(void)
{
	char lower_case;
	char upper_case;
	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}
	putchar('\n');
	return (0);
}
