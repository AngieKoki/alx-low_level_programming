#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other char of a string from 1st
 * @str: input character
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
