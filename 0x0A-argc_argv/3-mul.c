#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: an argument of comandline arguments
 * @argv: an array containing commandline arguments
 * Return: 0 always
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
