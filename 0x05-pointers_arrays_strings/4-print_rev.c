#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: character input
 * Return: always 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len > 0)
	{
		_putchar(*(s + len - 1));
		len--;
	}
	_putchar('\n');
}
