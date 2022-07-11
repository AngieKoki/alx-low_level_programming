#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: points a string
 * @dest: points to buffer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int stopCount = 0;
	int i = 0;

	while (!stopCount)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) != '\0')
			i++;
		else
			stopCount = 1;
	}
	return (dest);
}
