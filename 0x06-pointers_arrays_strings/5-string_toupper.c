#include "main.h"
/**
 * string_toupper - A function that changes all lowercase letters to uppercase.
 * @str: An input.
 * Return: A string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}

	return (str);
}
