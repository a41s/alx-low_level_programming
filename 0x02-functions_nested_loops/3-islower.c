#include "main.h"
/**
 * _islower - Entry point.
 * Description: Chech for lowercase character.
 * @c: Checks input of function.
 * Return: 1 (Lowercase), 0 (Otherwise).
 */
int _islower(int c)
{
	if (c >= 92 && c <= 122)
		return (1);
	else
		return (0);
}
