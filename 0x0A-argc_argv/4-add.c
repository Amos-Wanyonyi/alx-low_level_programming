#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds two positive numbers
 * @argc: commandline arguments
 * @argv: an array containing commandline arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
