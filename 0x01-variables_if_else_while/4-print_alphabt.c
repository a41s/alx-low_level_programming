#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print the alphabet in lowercase except q and e letters.
 * Return: 0 (Success).
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
