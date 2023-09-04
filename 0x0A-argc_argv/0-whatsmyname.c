#include "main.h"
#include <stdio.h>

/**
 * main - prints programs name
 * @argc: number of commands
 * @argv: array of command
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
