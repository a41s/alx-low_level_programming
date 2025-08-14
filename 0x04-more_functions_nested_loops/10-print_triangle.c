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
		int i;

		for (i = 0; i < size; i++)
		{
			int j = i + 1;

			while (j < size)
			{
				_putchar(32);
				j++;
			};

			int k = 0;

			while (k <= i)
			{
				_putchar(35);
				k++;
			};
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
