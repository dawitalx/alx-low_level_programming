#include "main.h"
#include <stdio.h>

/**
 * main - multiple two number
 * argc: number of argument
 * argv: pointer of argument
 * Return: multiplication of two number
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1] * argv[2]));

	return (0);
}
