#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int counter;
	char ch;

	counter = 0;

	while (counter < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		counter++;
		_putchar('\n');
	}
}
