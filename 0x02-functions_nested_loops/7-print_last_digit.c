#include "main.h"

/**
 * print_last_digit - returns the value of the last digit
 * @numld: integer input
 * Return: value of the last digit
 */

int print_last_digit(int numld)
{
	int ld;

	ld = (numld % 10);
	if (ld <= 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}
