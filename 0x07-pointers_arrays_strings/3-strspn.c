#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input characters
 * @accept: number of bytes
 * Return: number of bytes in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, sect;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		sect = 1;

		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				sect = 0;

				break;
			}
		}
		if (sect == 1)
			break;
	}
	return (x);
}
