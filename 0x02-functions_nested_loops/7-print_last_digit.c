#include "main.h"
/**
 * print_last_digit - Entry point.
 * Description: Print the last digit of a number.
 * @n: Checks input
 * Return: value of the last digit..
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = n * (-1) % 10;
	else
		last_digit = n % 10;

	_putchar(last_digit + 48);
	return (last_digit);
}
