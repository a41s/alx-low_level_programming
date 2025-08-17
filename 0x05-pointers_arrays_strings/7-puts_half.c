#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: an input.
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{

		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(i + '0');
	}
	else
	{
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
