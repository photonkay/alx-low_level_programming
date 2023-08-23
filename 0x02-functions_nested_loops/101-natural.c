#include <stdio.h>

/**
*main - entry point
*Description: program outputs the sum of multiples of 3 or 5 below 1024
*Return: always 0 on success
*/
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
    return (0);
}
