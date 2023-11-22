#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds two positive numbers
 * @argc: commandline arguments
 * @argv: an array containing commandline arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int count, count1, sum;

	sum = 0;
	if (argc < 1)
	{
		printf("0");
	}
	for (count = 1; count < argc; count++)
	{
		sum += atoi(argv[count]);
		for (count1 = 0; argv[count][count1] != '\0'; count1++)
		{
			if (!(isdigit(argv[count][count1])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
