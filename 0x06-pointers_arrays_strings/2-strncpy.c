#include "main.h"
/**
 * _strncpy - A function that copies a string.
 * @dest: An input.
 * @src: An input.
 * @n: An input.
 * Return: An string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
