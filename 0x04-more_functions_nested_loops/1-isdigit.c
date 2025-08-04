#include "main.h"
/**
 * _isdigit - Function to check is digit.
 * @c: Input to process.
 * Return: 1 (Success), 0 (Fail).
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
