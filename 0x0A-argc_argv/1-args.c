#include <stdio.h>
/**
 * main - prints the number of arguments passed through a program
 * @argc: the number of arguments in a command line
 * @argv: an array containing command line arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
