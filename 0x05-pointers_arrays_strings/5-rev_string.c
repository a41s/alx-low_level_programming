#include "main.h"
/**
 * rev_string - A function that reverses a string.
 * @s: An input string.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, len;
	char tmp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = --i;

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[len];
		s[len] = tmp;
		len--;
	}
}
