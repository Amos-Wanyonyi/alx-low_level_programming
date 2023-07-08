#include <stdio.h>
/**
 * main - prints the number of args passed through a program
 * @argc: number of commandline arguments
 * @argv: aan array containing the argc
 * Return: 0 if success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

