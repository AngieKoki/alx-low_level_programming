#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination  memory area
 * @src: source memory area
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
