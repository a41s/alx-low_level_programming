#include "main.h"
/**
 * _isalpha - Entry point.
 * Description: Check for alphabetic (lowercase or uppercase) character.
 * @c: Checks input of function.
 * Return: 1 (Alphabetic), 0 (Otherwise).
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
