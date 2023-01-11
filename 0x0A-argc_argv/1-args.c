#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of argument
 * @argv: pointer to array
 * Return: 0 if succed
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d",argc);
	printf("%d",0);

	return (0);
}
