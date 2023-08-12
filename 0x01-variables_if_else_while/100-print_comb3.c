#include <stdio.h>
/**
 * main - entry point
 * use brains they say
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 57; n++)
	{
		for (m = 49; m < 58; m++)
		{
			while (m > n)
			{
				putchar(n);
				putchar(m);
			
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
