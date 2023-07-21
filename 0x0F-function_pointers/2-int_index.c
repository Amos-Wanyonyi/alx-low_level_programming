#include <stdio.h>
/**
 * int_index - searches for an integer
 * @size: number of elements in an array
 * @array: the array used
 * @cmp: pointer to the function to be used to compare values
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
