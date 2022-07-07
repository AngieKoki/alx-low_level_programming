#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *@ab:integer input
 * Return: absolute value of integer
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
