#include "main.h"
/**
 * _strlen - A function that returns the length of a string.
 * @s: An input.
 * Return: int.
 */
int _strlen(char *s)
{
	int i = 0, counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
