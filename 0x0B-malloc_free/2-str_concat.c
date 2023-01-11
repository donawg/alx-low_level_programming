#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string. NULL if failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len_i, len_j, i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (NULL);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		if (!s2)
			return (NULL);
		*s2 = '\0';
	}
	len_i = 0;
	while (1)
	{
		if (s1[len_i] == '\0')
			break;
		len_i++;
	}
	len_j = 0;
	while (1)
	{
		if (s2[len_j] == '\0')
			break;
		len_j++;
	}
	concat = malloc(sizeof(char) * (len_i + len_j - 1));
	if (!concat)
		return (NULL);
	i = 0;
	while (i < len_i)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (j <= len_j)
	{
		*(concat + (j + i)) = *(s2 + j);
		j++;
	}

	return (concat);
}
