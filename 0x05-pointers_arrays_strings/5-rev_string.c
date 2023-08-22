#include "main.h"

/**
*rev_string - reverses string
*@s: string argument passed
*Return: void
*/
void rev_string(char *s)
{
	int i, start, end, length = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < (length - 1); i++)
		end++;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
