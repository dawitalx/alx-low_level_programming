#include <stdio.h>
/**
 * main - function return num of args
 * @argc: int
 * @argv: char
 * Return: always 0
 */

int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc);

	return (0);
}
