#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase letters
 * @c: integer input
 * Return: Nothing
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
