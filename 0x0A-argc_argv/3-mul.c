#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* main - a program that multiplies two numbers
* @argc: the number of arguments in a command line
* @argv: an array containing the arguments
* Return: 0 if success, 1 if error
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
