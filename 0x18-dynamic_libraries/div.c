#include "main.h"
#include <stdio.h>

/**
 * _div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: quotient of two integers
 */

int _div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
