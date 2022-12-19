#incldue "main.h"

/**
 * _puts - writes a string, then a new line
 * @str: string to write
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
