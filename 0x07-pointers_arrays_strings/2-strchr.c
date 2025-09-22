#include "main.h"
/**
 * _strchr - A function that locates a character in a string.
 * @s: An input
 * @c: An input
 * Return: An char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	if (*(s + i ) == c)
		return (s + i);
	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	return ('\0');
}
