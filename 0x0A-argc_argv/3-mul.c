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
	int mult, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;
	printf("%d\n", mult);
return (0);
}
