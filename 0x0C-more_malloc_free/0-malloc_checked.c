#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and checks allocation fail
 * @b: number of bytes
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *bp;

	bp = malloc(b);

	if (bp == NULL)
	{
		exit(98);
	}
	return (bp);
}
