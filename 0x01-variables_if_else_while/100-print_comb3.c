#include <stdio.h>
/**
 * main - entry point
 * use brains they say
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 56; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
			}
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
