#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print the alphabet in lowercase and then in uppercase.
 * Return: 0 (Success).
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
