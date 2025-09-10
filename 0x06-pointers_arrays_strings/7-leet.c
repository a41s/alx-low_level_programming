#include "main.h"
/**
 * leet - A function that encodes a string into 1337.
 * @s: An input.
 * Return: char.
 */
char *leet(char *s)
{
	char sml[] = {'a', 'e', 'o', 't', 'l'};
	char cap[] = {'A', 'E', 'O', 'T', 'L'};
	char Num[] = {'4', '3', '0', '7', '1'};
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == sml[j] || s[i] == cap[j])
				s[i] = Num[j];
		}
		i++;
	}
	return (s);
}
