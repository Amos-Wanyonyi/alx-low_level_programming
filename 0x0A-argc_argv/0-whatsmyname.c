#include <stdio.h>
/**
 * main - prints it's name
 * @argc: number if commandline arguments
 * @argv: an array containing commandline arguments
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
