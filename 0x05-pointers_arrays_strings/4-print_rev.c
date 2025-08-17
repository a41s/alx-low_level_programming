#include "main.h"
/**
 * print_rev - A function that prints a string, in reverse.
 * @s: A pointer to string.
 * Return: Void.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for(i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
