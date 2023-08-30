#include "main.h"

/* function prototypes*/
int isPalindrome(char *s, int i, int j);
int _strlen_recursion(char *s);

/**
 * is_palindrome - does the final check
 * @s: string passed into function
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	return isPalindrome(s, 0, length - 1);
}

/**
 * _strlen_recursion - returns the length of the string
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}


/**
 * isPalindrome - checks if palindrome
 * @s: input string
 * Return: 1 or 0
 */
int isPalindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return isPalindrome(s, i + 1, j - 1);
}
