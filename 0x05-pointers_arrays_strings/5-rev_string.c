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
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	int l;

	l = _strlen(s) + 1;
	char temp_s[l];

	for (i = 0; s[i] != '\0'; i++)
		temp_s[i] = s[i];
	temp_s[i - 1] = '\0';

	s = temp_s;
}
