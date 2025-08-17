#include "main.h"
/**
 * rev_string - A function that reverses a string.
 * @s: An input string.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, len, len2;
	char tmp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len2 = --len;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2] = tmp;
		len2--;
	}
}
