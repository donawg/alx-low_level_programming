#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates arguments given to program with new line
 * @ac: number of arguments
 * @av: arguments array
 *
 * Return: pointer to concatenated string. NULL if no args or fail.
 */
char *argstostr(int ac, char **av)
{
	char *args_concat;
	int len;
	int i;

	if (!ac || !av)
		return (NULL);
	len = 0;
	for (i = 1; i <= ac; i++)
	{
		char_i = char[i];

