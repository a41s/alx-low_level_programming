#include "main.h"
/**
 * print_alphabet_x10 - Enter point.
 * Description: Print alphabet in lowercase 10 times.
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char ch = 'a';

	while (counter <= 9)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		ch = ch - 26;
		counter++;
		_putchar('\n');
	}
}
