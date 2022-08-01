#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: array
 * @size: size in bytes of elements in the array
 * Return: when size=0, NULL, if fails, NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		str[x] = 0;

	return (str);
}
