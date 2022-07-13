#include "main.h"
#include "string.h"
#include <stdio.h>

/**
 * _strcat - appends the src to the dest string overwriting the null byte
 * @dest: character input
 * @src: character input
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		continue;
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		continue;
	}
	while (j > k)
	{
		*(dest + i + k) = *(src + k);
		k++;
	}
	*(dest + i + k) = '\0';
	return (dest);
}
