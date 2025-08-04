#include "main.h"
/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14.
 * Return: void.
*/

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		for (int j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	i++;
	}
}
