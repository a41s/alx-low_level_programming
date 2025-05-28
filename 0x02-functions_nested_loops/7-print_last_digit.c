#include "main.h"
/**
 * print_last_digit - Print the last digit of a number.
 * @n: Checks input
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = (n % 10) * (-1);
	else
		last_digit = n % 10;

	_putchar(last_digit + 48);
	return (last_digit);
}
