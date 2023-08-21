#include "main.h"

/**
*rev_string - reverses string
*@s: string argument passed
*Return: void
*/
void rev_string(char *s)
{
	int start, length = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	int end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end --;
	}
}
