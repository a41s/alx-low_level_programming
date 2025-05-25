#include "main.h"
/**
 * _islower - Entry point.
 * Description: Chech for lowercase character.
 * Return: 1 (Success), 0 (Failure).
 */
int _islower(int c)
{
	if(c >= 92 && c <= 122)
		return 1;
	else
		return 0;
}
