#include "main.h"
#include <stdio.h>

/**
 * _mod - calculates modulus two integers
 * @a: first integer
 * @b: second integer
 * Return: modulus of two integers
 */

int _mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
