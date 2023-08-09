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
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}

