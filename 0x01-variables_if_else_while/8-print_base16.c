#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print all the numbers of base 16 in lowercase.
 * Return: 0 (Success).
 */
int main(void)
{
	short i = 48;

	while (i <= 102)
	{
		if (i == 58)
			i = 97;
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
