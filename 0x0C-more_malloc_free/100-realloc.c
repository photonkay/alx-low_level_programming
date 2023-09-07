#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @ptr: pointer to previous memory
 * @old_size: previous memory size
 * @new_size: new size to be assigned
 * Return: pointer to array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
		copy_size = old_size;
	else
		copy_size = new_size;

	memcpy(new_ptr, ptr, copy_size);

	free(ptr);
	return (new_ptr);
}
