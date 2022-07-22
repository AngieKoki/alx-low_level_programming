#include "main.h"
#include <stdio.h>

/**
 * main - prints programs name followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: program name
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
