#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: Always 0 on success
 */
void jack_bauer(void)
{
	for (i = 0; i < 24, i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
