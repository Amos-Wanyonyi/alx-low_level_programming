#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of it's own main function
 * @argc: no of arguments in the command line
 * @argv: an array containing the commandline arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int bytes, index;
	unsigned char opcode;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		if (index == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
