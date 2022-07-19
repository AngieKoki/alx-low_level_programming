#include "main.h"

/**
 * _memset - fills memory with the constant byte b
 * @s: address of the memory to print
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
