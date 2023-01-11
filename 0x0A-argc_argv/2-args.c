#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments
 * @argc: number of argument
 * @argv: pointer of argument
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n",argv[i]);
	}

	return (0);
}
