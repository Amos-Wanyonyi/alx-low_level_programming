#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the min value
 * @max: the max value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
		ptr[i] = min + i;
	return (ptr);
}
