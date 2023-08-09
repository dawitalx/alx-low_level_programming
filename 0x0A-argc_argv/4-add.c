#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - sum all arguments
 * @argc: no of arg
 * @argv: array of arg
 * Return: Error or 0 or 1
 */

int main(int argc, char **argv)
{
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

