#include <stdio.h>
/**
 * main - enrty point
 * @argc: the number of command line arguments
 * @argv: an array pointing to the string containing the arguments
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
