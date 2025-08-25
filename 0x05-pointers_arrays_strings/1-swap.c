#include "main.h"
/**
 * swap_int - A function that swaps the value of two integers.
 * @a: An input.
 * @b: An input.
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
