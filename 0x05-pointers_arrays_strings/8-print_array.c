#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers.
 * @a: an input.
 * @n: an input.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
