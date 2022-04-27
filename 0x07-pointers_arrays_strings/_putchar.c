#include <unistd.h>
#include "main.h"
/**
 * _putchar - write  the character c to stdout
 * @c: A pointer
 * Return: On success 1
 * on error, -1 and error is set appropriately
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
