#include "main.h"
/**
 * IsDelimiter - A function that checks if the char is a delimiter.
 * @c: An input.
 * Return: 1 if true, 0 if false.
 */
int IsDelimiter(char c)
{
	int i;
	int delimiter[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; i < 13; i++)
	{
		if (delimiter[i] == c)
			return (1);
	}
	return (0);
}

/**
 * IsALetter - A function that checks if the char is a letter.
 * @c: An input.
 * Return: 1 if true, 0 if false.
 */
int IsALetter(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: An input.
 * Return: A string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (IsALetter(str[i]) && IsDelimiter(str[i - 1]))
			str[i] -= 32;
		i++;
	};
	return (str);
}
