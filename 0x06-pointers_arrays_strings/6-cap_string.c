#include "main.h"
/**
 * IsDelimiter - A function that checks if the char is a delimiter.
 * @c: An input.
 * Return: 1 if true, 0 if false.
 */
int IsDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
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
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
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
		if (IsDelimiter(str[i - 1]) && IsALetter(str[i]))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
