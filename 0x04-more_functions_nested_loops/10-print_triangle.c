#include "main.h"
/**
 * print_triangle - A function that prints a triangle.
 * @size: An Inpute.
 * Return: Void.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(32);
			for (j = i; j > 0; j--)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
