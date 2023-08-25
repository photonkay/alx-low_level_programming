#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: void
  */
void print_number(int n)
{
	int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else
		x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}
