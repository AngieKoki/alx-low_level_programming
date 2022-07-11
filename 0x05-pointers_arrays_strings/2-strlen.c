#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: integer input
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
