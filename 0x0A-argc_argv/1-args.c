#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Return: a number
 */

int main(int argc, char *argv[])
{
	int count, sum = 0;

	for (count = 1; count < argc; count++)
	{
		/* Arithmetic condition */

		sum = sum + atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}
