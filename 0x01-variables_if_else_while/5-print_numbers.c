#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print all single digit numbers of base 10 starting from 0.
 * Return: 0 (Success).
 */
int main(void)
{
	char i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
