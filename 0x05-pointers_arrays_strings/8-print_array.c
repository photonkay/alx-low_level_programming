#include <stdio.h>
#include "main.h"

/**
*print_array - prints elements of integer array
*@a: accesses array members
*@n: is the number of elements in array
*Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
