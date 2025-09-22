#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: An input
 * @accept: An input
 * Return: An int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (1)
	{
		if (s[i] == accept[0])
			return (i + 1);
		else if (s[i] != accept[0])
			i++;
		else
			return (0);
	}

}
