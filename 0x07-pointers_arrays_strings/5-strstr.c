#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, y, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack */
	{
		if (haystack[i] == needle[0])
		{

			x = i, y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[x] == needle[y])
					x++, y++;
				else
					break;
			}
			if (needle[y] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
