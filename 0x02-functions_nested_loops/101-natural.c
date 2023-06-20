#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 , 5 excluding 1023
 * Return: 0 if success
 */
int main(void)
{
	int i, z = 0;
	 while (i < 1024)
	 {
		 if ((i % 3 == 0) || (i % 5 == 0))
		 {
			 z += i;
		 }
		 i++;
	 }
	 printf("%d\n", z);
	 return (0);
}
