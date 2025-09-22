#include "main.h"
/**
 * _memcpy - A function that copys from src to dest..
 * @dest: An input
 * @src: An input
 * @n: An input
 * Return: An char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
