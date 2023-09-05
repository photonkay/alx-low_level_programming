#include <stdlib.h>
#include <string.h>
/*
 * countWords - counts the number of words in string
 * @str: sting passed
 * Return: int count
 */
int countWords(const char *str)
{
	int count = 0;
	int isWord = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			isWord = 0;
		}
		else if (isWord == 0) 
		{
			isWord = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - splits strings
 * @str: string passed into function
 * Return: string pointer
 */
char **strtow(char *str)
{
	int numWords = countWords(str);
	int wordIndex = 0;
	int wordLength = 0;
	char **wordArray;

	if (str == NULL || *str == '\0')
		return (NULL); // Return NULL for empty or NULL input

	if (numWords == 0)
		return (NULL); // No words found

    wordArray = (char **)malloc((numWords + 1) * sizeof(char *));
	if (wordArray == NULL)
		return (NULL); // Memory allocation failed

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n') {
			if (wordLength > 0)
			{
				wordArray[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
				if (wordArray[wordIndex] == NULL)
					return (NULL); // Memory allocation failed

				strncpy(wordArray[wordIndex], str - wordLength, wordLength);
				wordArray[wordIndex][wordLength] = '\0';
				wordLength = 0;
				wordIndex++;
			}
        }
		else
			wordLength++;
        str++;
    }

    // Handle the last word
	if (wordLength > 0)
	{
		wordArray[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
		if (wordArray[wordIndex] == NULL)
            return (NULL); // Memory allocation failed

		strncpy(wordArray[wordIndex], str - wordLength, wordLength);
		wordArray[wordIndex][wordLength] = '\0';
		wordIndex++;
	}

	wordArray[wordIndex] = NULL; // Null-terminate the array
	return (wordArray);
}
