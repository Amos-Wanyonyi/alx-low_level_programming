#include <stdio.h>
/**
 * main - entry point
 * @argc: the number of commandline arguments
 * @argv: pointer to the string with arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
