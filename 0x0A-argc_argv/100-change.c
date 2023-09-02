#include "stdio.h"
#include <stdlib.h>
/**
* main - minimum number of coins to make for change
* @argc: the number of commandline arguments
* @argv: an array containing the commandline arguments
* Return: 0 if success, 1 if error
*/
int main(int argc, char *argv[])
{
	int change, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	for (n = 0; change > 0; n++)
	{
		if (change - 25 >= 0)
			change -= 25;
		else if (change - 10 >= 0)
			change -= 10;
		else if (change - 5 >= 0)
			change -= 5;
		else if (change - 2 >= 0)
			change -= 2;
		else if (change - 1 >= 0)
			change -= 1;
	}
	printf("%d\n", n);
	return (0);
}
