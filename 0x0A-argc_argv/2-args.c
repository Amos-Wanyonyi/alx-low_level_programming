#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argc: the number of commandline arguments
 * @argv: an array containing the commandline arguments
 * Return: 0 if success
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
