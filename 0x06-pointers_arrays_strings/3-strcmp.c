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
		if (s2[i] != s1[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
