#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: single input character
 * Return: 1 print '+' if n > 0, 0 print 0 if n = 0, -1 print '-' if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}

