#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: no of arg
 * @argv: arg array
 * Return: always 0
 */

int main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
		printf("%p\n", argv[i]);

	return (0);
}
