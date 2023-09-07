#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and checks if allocation fails
 * @b: an unsigned integer
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *bp;
	bp = malloc(sizeof(unsigned int));

	if (bp == NULL)
		exit(98);
}
