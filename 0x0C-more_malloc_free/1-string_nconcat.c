#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy from string 2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size;
	int s1_size;
	int i;
	char *new_s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	s1_size = 0;
	for (s1_size = 0; 1; s1_size++)
		if (s1[s1_size] == '\0')
			break;
	size = s1_size + n + 1;
	new_s = malloc(size);
	if (!new_s)
		return (NULL);
	for (i = 0; i <= s1_size; i++)
		new_s[i] = s1[i];
	for (i = 0; i < n; i++)
		new_s[i + size_i] = s2[i];
	new_s[i + size_i] = '\0';

	return (new_s);
}
