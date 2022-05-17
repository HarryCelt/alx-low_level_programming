#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @seperator: string tobe printed between numbers
 * @n: number of arguments to be passed
 * Return: 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	va_start(valist, n);

	for(i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
