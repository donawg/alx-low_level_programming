#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -1 if s1 compares less, 0 if equal, 1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (-1);
		i++;
	}
	if (s1[i] == '\0')
		return (0);
	return (1);
}
