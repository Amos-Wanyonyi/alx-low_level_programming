#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of arguments in the command line
 * @argv: an array of strings conatining argc
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

