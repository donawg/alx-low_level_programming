#include "main.h"

/**
 * puts2 - prints every other character
 * starting with the first
 * @str: string to print every alternating char of
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2)
			_putchar(str[i]);
}
