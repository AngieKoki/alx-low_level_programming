#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: input string
 * @accept: input string
 * Return: a pointer to the byte s that matches the one in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];

				return (s);
			}
		}
		i++;
	}

	return (NULL);
}
