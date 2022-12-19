#include "main.h"

/**
 * puts_half - prints hald of a string, then a new line
 * @str: string to print half of
 */
void puts_half(char *str)
{
	int str_len, half_len;
	int i = 0;

	str_len = _strlen(str);
	half_len = str_len / 2;
	while (i < half_len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
