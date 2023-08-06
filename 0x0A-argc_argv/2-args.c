#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: no of arg
 * @argv: arg array
 * Return: always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", argv[argc]);
	}

	return (0);
}
