#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply the two argument
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
}
