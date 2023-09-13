#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates over a specific function
 * @size: size of array
 * @action: action to perform during iteration
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
