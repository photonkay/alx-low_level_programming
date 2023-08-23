#include <stdio.h>

/**
*main - entry point
*Description: program outputs Fibonacci numbers starting from 1 and 2
*		this time only evens get through
*Return: always 0 on success
*/
int main(void)
{
	unsigned long int i, sum;
	unsigned long int a = 1, b = 2, c = 0;

	for (i = 0; i < (4000000 - 2); i++)
    {
		c = a + b;

		if (c % 2 == 0)
			sum += c;

		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
