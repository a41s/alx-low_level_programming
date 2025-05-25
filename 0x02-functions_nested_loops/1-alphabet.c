#include "main.h"
/**
 * print_alphaber - utilizes on the _putchar function to print the alphabet,
 *			in lowercase.
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
