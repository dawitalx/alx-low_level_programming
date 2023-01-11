#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiple two number
 * argc: number of argument
 * argv: pointer of argument
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
