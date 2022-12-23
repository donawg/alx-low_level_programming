#include "main.h"

/**
 * _strncpy - copies contents of one string to another, up to a character count
 * @dest: string to be copied to
 * @src: string to copy from
 * @n: maximum characters to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int e = 0;

	for (i = 0; i < n; i++)
	{
		if (!e)
			if (src[i] == '\0')
				e = 1;
		if (!e)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (dest);
}
