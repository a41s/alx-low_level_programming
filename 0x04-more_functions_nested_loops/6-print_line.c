#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: An input to proccess.
 * Return: void.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
