#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: an input.
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len, halfLen;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	if (len % 2 != 0)
		halfLen = (len - 1) / 2;
	else
		halfLen = len / 2;

	for (i = halfLen; i < len; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
