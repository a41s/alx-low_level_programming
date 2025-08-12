#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: An input.
 * Return: void.
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
