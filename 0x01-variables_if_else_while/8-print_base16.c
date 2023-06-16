#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if success
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 0; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	return (0);
}
