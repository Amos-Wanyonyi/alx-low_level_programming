#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for a multiplication
 * @argc: number of commandline arguments
 * @argv:array containing the commandline arguments
 * Return: 0 if succcess
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;

	printf("%d\n", result);
	return (0);
}
