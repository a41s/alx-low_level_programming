#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print all possible combinations of single-digit numbers.
 * Return: 0 (Success).
 */
int main(void)
{
	short i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
		putchar('\n');

	return (0);
}
