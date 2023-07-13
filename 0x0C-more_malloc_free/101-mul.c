#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - multiplies two digit numbers
* @argc: the number of argcuments in a command line
* @argv: an array containing the arguments
* Return: always 0
*/
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
