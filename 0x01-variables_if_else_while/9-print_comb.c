#inlcude <stdio.h>
/**
 * main - entry point
 * code for combinatorial stuff
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 58)
		putchar(n);
		if (n != 9)
			putchar(',');
			putchar(' ');
	putchar("\n");
	return (0);
}
