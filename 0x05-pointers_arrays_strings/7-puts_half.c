#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: an input.
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len, halfLen;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		halfLen = len / 2;
	else
		halfLen = (len - 1) / 2;

	for (i = halfLen; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
