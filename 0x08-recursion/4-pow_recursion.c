#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to pow y
 * @x: integer input
 * @y: integer input of power
 * Return: value of x raised to the power y
 * If y is < 0, return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
