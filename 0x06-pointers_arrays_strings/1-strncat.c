#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: input character
 * @src: input character
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	while (*(dest + j) != '\0')
	{
		j++;
	}
	while (n > k)
	{
		if (*(src + k) == '\0')
		{
			*(dest + j + k) = *(src + k);
			break;
		}
		else
			*(dest + j + k) = *(src + k);
		k++;
	}
	return (dest);
}
