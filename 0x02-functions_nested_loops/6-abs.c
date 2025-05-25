#include "main.h"
/**
 * _abs - Entry point.
 * Description: Computes the absolute value of an integer.
 * @n: Checks input of function.
 * Return: 0 (Always).
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
