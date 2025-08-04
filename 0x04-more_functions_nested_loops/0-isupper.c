#include "main.h"
/**
 *_isupper - Function to Check the letter is uppercase.
 *@c: Input to process.
 *Return: 1 (Success), 0 (Fail).
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
