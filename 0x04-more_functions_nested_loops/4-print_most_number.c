#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 excluding 2,4
 * @void: input integer
 * Return: numbers 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
	{
		if (c != 50 && c != 52)
			_ptchar(c);
	}
	_putchar('\n');
}
