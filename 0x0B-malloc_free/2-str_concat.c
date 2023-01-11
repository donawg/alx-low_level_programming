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
	int len_i, len_j, i, j, c_len;
	char *concat;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
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
	c_len = len_i + len_j ? 1 : len_i + len_j - 1 ? 1 : len_i + len_j - 1;
	concat = malloc(sizeof(char) * c_len);
	if (!concat)
		return (NULL);
	i = 0;
	while (i < len_i)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (j < len_j)
	{
		*(concat + (j + i)) = *(s2 + j);
		j++;
	}
	*(concat + (c_len - 1)) = '\0';
	return (concat);
}
