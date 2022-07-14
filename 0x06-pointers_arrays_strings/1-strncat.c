#include "main.h"
#include <stdio.h>
#include "string.h"

/**
 * _strncat - concatenate two strings
 * @dest: input character
 * @src: input character
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count;
	int m = 0;

	for (count = 0; count < 1000; count++)
	{
		if (dest[count] == '\0')
		{
			break;
		}
		m++;
	}

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[m + count] = src[count];
	}
	dest[m + count] = '\0';
	return (dest);
}
