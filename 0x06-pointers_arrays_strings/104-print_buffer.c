#include "main.h"
#include <stdio.h>

/*
 * isPrintableASCII -determines if n is a printable ASCII char
 * @n: integer
 * Return: argument
 */

int isPrintableASCII(int n)
{
	return(n >= 32 && n <=126);
}

/**
 * printHexes -print hex values for string b in formatted form
 * @b: string to print
 * @start: starting point
 * @end: end point
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while(i < 10)
	{
		if (i < end)
			printf("%02x",*(b + start + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - print ASCII values for string b
 * @b: string to print
 * @start: start point
 * @end: end point
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c",ch);
		i++;
	}
}

/**
 * print_buffer - Prints buffer
 * @b: buffer
 * @size size
 */

void print_buffer(char *b, int size)
{
	int o, j;

	if (size > 0)
	{
		for (o = 0; o < size; o += 10)
		{
			j = (size - o < 10) ? size - o : 10;
			printf("%08x", o);
			printHexes(b, o, j);
			printASCII(b, o, j);
			printf("\n")
		}
	}
	else
		printf("\n");
}
