#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: An input to proccess.
 * Return: void.
 */

void print_line(int n)
{
	int counter = 0;

	for (counter; n > 0 && counter <= n; counter++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
