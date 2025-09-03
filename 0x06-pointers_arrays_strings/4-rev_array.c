#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array.
 * @a: An input.
 * @n: An input.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < (n - 1)/ 2; i++)
	{
		t = a[i];
		a[i] = a[--n];
		a[n] = t;
	}
}
