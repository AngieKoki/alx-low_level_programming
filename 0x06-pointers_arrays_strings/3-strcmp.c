#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input string one
 * @s2: input string two
 * Return: comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		/*break if there isa terminating byte */
		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
