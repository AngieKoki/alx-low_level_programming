#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

/**
 * _puts - print a string followed by a new line
 * @str: character input
 * Return: Always (0)
 */

void _puts(char *str)
{
	int len = strlen(str) + 1;
	char *temp = malloc(len);
	int i;

	for (i = 0; i < len; i++)
	{
		char ch = str[];

		if (ch == '\n')
			break;
		temp[i] = ch;
	}
	temp[i] = 0;

	puts(temp);
}
