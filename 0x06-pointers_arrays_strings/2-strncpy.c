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

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
