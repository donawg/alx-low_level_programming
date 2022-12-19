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
 * print_rev - writes a string in reverse, then a new line
 * @s: string to write in reverse
 */
void print_rev(char *s)
{
	int s_i;

	s_i = _strlen(s) - 1;
	while (s_i >= 0)
	{
		_putchar(s[s_i]);
		s_i--;
	}
	_putchar('\n');
}
