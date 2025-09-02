#include "main.h"
/**
 * _strncat - A function that concatenates two strings.
 * @dest: An input.
 * @src: An input.
 * @n: An input.
 * Return: A string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i++] += src[j];
		j++;
	}

	dest += '\0';
	return (dest);
}
