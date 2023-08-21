#include "main.h"

/**
*swap_int - swaps value of two integers
*@a: first value
*@b: second value
*Return: void
*/
void swap_int(int *a, int *b)
{
	int tempa, tempb;

	tempa = *a;
	tempb = *b;
	*b = tempa;
	*a = tempb;
}
