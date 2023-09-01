#include <stdio.h>
/**
 * main - entry point
 * @argc: command line arguments
 * @argv: pointer to the string
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
