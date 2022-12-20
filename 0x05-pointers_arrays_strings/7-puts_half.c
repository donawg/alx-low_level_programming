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
 * puts_half - prints hald of a string, then a new line
 * @str: string to print half of
 */
void puts_half(char *str)
{
	int str_len;
	int i;

	str_len = _strlen(str);
	i = (str_len - 1) - (str_len / 2);
	while (i < str_len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
