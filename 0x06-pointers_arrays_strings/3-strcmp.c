#include "main.h"
/**
 * _strcmp - A function that compares two strings.
 * s1: An input as a first string.
 * s2: An input as a second string.
 * Return: An int.
 */
int _strcmp(char *s1, char *s2)
{
	int n1, n2;

	n1 = 0;
	while (s1[n1] != '\0')
		n1++;

	n2 = 0;
	while (s2[n2] != '\0')
		n2++;

	if (n1 > n2)
		return (15);
	else if (n2 > n1)
		return (-15);
	else
		return (0);
}
