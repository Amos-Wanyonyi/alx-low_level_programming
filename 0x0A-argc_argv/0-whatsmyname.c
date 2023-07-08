#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints it's name
 * @argc: The number of command line arguments
 * @argv: An array containing the the command line arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
