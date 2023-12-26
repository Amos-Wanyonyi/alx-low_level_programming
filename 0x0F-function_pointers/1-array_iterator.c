#include "function_pointers.h"
/**
 * array_iterator - executes function given as a parameter
 * on each element of an array
 * @size: size is the size of the array
 * @action: action is a pointer to the function you need to use
 * @array: array to iterate over
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
