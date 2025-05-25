#include "main.h"
/**
 * print_sign - Entry point.
 * Description: print the sign of a number.
 * @n: Checks input of function.
 * Return: 1 (greater than zero), 0 (zero), -1 (less than zero).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
