#include <stdio.h>

/**
*main - entry point
*Description: program outputs Fibonacci numbers starting from 1 and 2
*Return: always 0 on success
*/
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, c = 0;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		if (i < 47)
			printf("%lu, ", c);
		else
			printf("%lu", c);
		a = b;
		b = c;
	}
	return (0);
}
