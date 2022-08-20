#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to char of binary input
 * Return: converted number, 0 if not 0,1, NULL
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int i = 0, val = 0;

	if (b == NULL)
		return (0);

	for (; *(b + i); i++)
	{
		val = val << 1;
		if (*(b + i) == '1')
			val = val | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (val);
}
