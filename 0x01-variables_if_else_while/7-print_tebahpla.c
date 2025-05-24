#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print the lowercase alphabet in reverse.
 * Return: 0 (Seccess).
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
