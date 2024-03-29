#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiply two positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: the result of the multiplication, error is args is incorrect
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
