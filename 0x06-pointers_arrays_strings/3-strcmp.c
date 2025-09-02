#include "main.h"
/**
 * _strcmp - A function that compares two strings.
 * @s1: An input as a first string.
 * @s2: An input as a second string.
 * Return: An int.
 */
int _strcmp(char *s1, char *s2)
{
	for (; ((*s1 != '\0')&&(*s2 != '\0') && (*s1 == *s2)); s1++, s2++)
		;
	return (*s1 - *s2);
}
