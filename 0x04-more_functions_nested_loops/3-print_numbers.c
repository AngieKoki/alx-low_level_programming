#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0-9 in a new line
 *@void: integer
 *Return: print numbers in a new line
 */

void print_numbers(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
