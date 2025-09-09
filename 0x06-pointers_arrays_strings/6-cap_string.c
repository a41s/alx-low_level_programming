#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: An input.
 * Return: A string.
 */
char *cap_string(char *str)
{
	int i, j;
	int delimiter[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (delimiter[j] == str[i])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[++i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
