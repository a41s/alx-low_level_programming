#include "main.h"
/**
 * print_square - A function that prints a square.
 * @size: An Input.
 * Return: void.
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			int j = 0;

			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
