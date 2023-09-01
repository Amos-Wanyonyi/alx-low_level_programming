#include <stdio.h>
/**
 * main - entry point
 * @argc: command line arguments
 * @argv: pointer to the string
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;	
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			;
			printf("%d\n", i - 1);
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
