#include "main.h"

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
