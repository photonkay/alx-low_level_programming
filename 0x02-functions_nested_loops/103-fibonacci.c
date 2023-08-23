#include <stdio.h>

/**
*main - entry point
*Description: program outputs sum of Fibonacci numbers starting from 1 and 2
*		only evens are summed
*Return: always 0 on success
*/
int main(void)
{
	unsigned long int i, sum;
	unsigned long int a = 0, b = 1, c = 0;

	for (i = 1; c < 4000000; i++)
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
