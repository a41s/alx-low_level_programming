#include <stdio.h>
/**
 * main - Entry point.
 * Description: Prints all possible different combinations of two digits.
 * Return: 0 (Success).
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			if (i <= 56 && j <= 57)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
