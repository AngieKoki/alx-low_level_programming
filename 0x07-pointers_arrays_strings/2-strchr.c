#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s : characters input
 * @c: character c
 * Return: a pointer to the first occurence of the char c, Null if no char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if s[i] == c

		return (&s[i]);

	else
		return (NULL);
}
