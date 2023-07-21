#include <stdio.h>
/**
 * array_iterator - executes a function parameter on each element of an array
 * @size: size of the array
 * @array: the array used
 * @action: is a pointer to a fxn you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!(array && action))
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
