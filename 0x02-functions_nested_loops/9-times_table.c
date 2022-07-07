#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: 9 times table
 */

void times_table(void)
{
	int row, col, cresult;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (col = 1; col <= 9; col++)
		{
			cresult = (row * col);

			if ((cresult / 10) > 0)
			{
				_putchar((cresult / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((cresult % 10) + '0');
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
