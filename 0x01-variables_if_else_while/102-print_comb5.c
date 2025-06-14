#include <stdio.h>

/**
 * main - a simple program that outputs unordered
 * combinations of two digit integers without duplicates
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int ii;
	int j;
	int jj;

	for (i = 48; i < 58; i++)
	{
		for (ii = 48; ii < 58; ii++)
		{
			jj = ii + 1;
			j = i;
			for (; j < 58; j++)
			{
				for (; jj < 58; jj++)
				{
					putchar(i);
					putchar(ii);
					putchar(' ');
					putchar(j);
					putchar(jj);
					if (i != 57 || j != 57 || ii != 56 || jj != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				jj = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
