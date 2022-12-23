#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: String to be measured
 *
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * _strcat - concatenates one string onto another
 * @dest: string to be lengthened
 * @src: string to copy from
 *
 * Return: Pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	dest_len = _strlen(dest);
	src_len = _strlen(src);

	char *new_str[dest_len + src_len];
	int i = 0;

	while (i < (dest_len + src_len))
	{
		if (i >= dest_len)
			new_str[i] = src[i - dest_len];
		else
			new_str[i] = dest[i];
		i++;
	}
	*dest = *new_str;

	return (new_str);
}
