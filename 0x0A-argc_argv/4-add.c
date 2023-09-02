#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of arguments in the commandline
 * @argv: an array containing the arguments
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}

		}
		result = result + atoi(argv[a]);
	}
	printf("%d\n", result);
	return (0);
}
