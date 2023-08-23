#include <stdio.h>

/**
*main - entry point
*Description: program outputs Fibonacci numbers starting from 1 and 2
*		this time only evens get through
*Return: always 0 on success
*/
int main(void)
{
	long int i;
	unsigned long int a = 1, b = 2, c = 0;

	printf("1, 2, ");
	for (i = 0; i < (4000000 - 2); i++)
    {
		c = a + b;

		if (c % 2 == 0)
			printf("%lu", c);

		if (i == (4000000 - 2))
			printf("\n");
		else
            printf(", ");
		a = b;
		b = c;
	}
	return (0);
}
