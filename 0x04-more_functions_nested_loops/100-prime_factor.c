#include "main.h"
/*
 * main - A function that finds and prints the largest prime factor of a number.
 * Return: 0 (success), -1 (otherwise).
 */
int main(void)
{
	int i, j;
	long int n = 612852475143;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			j = n;
		}
	}
	printf("%d\n", j);
	return (0);
}
