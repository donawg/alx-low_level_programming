#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: String to duplicate
 *
 * Return: Pointer to new string. NULL if fail.
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *strdup;

	if (!str)
		return (NULL);

	len = 0;
	while (1)
	{
		if (str[len] == '\0')
			break;
		len++;
	}
	strdup = malloc(sizeof(char) * (len + 1));
	if (!strdup)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		*(strdup + i) = *(str + i);
		i++;
	}
	*(strdup + i) = '\0';

	return (strdup);
}
