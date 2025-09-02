#include "main.h"
/**
 * _strcat - A function that concatenates two strings.
 * @dest: An input.
 * @src: An input.
 * Return: A string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest += src[i];
		i++;
	}

	return (dest);
}
