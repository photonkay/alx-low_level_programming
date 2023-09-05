#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @width: initial array size
 * @height: second dimension array size
 * Return: array pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j; /* iterators */
	int **ar; /* 2 dimensional array pointer */

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for height pointer array */
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	/* allocate memory for each row */
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ar[j]);
			}
			free(ar);
			return (NULL);
		}
		/* initialise array */
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
