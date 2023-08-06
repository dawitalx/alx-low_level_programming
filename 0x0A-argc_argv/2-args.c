#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: no of arg
 * @argv: arg array
 * Return: always 0
 */

int main(int argc, char **argv)
{
	for (int i = 0; i < args; i++)
		printf("%d\n", argv[i]);

	return (0);
}
