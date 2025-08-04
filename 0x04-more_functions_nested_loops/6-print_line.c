#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: An input to proccess.
 * Return: void.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
