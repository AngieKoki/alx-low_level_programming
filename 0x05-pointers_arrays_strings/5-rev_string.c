#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: input character
 * Return: Always 0
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*(s + len) != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		char temp = *(s + len - i - 1);
		*(s + len - i - 1) = *(s + i);
		*(s + i) = temp;
	}
}
