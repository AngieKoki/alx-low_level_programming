#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input characters
 * @src: input characters
 * @n: number of bytes
 * Return: copy of a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
