#include <stdio.h>
/**
 * main - entry point
 * code to print hexadecimal stuff
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
