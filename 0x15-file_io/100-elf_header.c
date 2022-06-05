#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _strncmp - compare two strings
 * @s1: first string
 * @s2: second string
 * @n: the maximum number of bytes to compare
 * Return: 0 or -1
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	for (; n && *s1 && *s2; --n, ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (n)
	{
		if (*s1)
			return (1);
		if (*s2)
			return (-1);
	}
	return (0);
}

/**
 * _close - close a file descriptor and print an error message upon failure
 * @file_data: file descriptor to close
 */

void _close(int file_data)
{
	if (close(file_data) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close file_data\n", 22);
	exit(98);
}

/**
 * _read - read a file or print error message upon failure
 * @file_data: file descriptor
 * @buff: buffer
 * @count: bytes to read
 */

void _read(int file_data, char *buff, size_t count)
{
	if (read(file_data, buff, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(file_data);
	exit(98);
}

/**
 * elf_magic - print ELF magic
 * @buffer: ELF header
 */

void elf_magic(const unsigned char *buffer)
{
	unsigned int i;

	if (_strncmp(const char *) buffer, ELFMAG, 4)
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n Magic:  "); 

	for (i = 0; i < 16; ++i)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}

/

void elf_magic(const unsigned char *buffer)
{
	unsigned int i;

	if (_strncmp((const char *) buffer, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n Magic:  ");

	for (i = 0; i < 16; ++i)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}

/**
 * elf_class - prints ELF class
 * @buffer: ELF header
 * Return: 32 0r 64
 */

size_t elf_class(const unsigned char *buffer)
{
	pritnf(" %-34s ", "Class:");

	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buffer[EI_CLASS]);
	return (32);
}
