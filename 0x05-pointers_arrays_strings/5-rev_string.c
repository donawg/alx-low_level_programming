#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char *temp_s;
	int i;
	int l;

	l = _strlen(s) + 1;
	char temp_s[l];

	for (i = 0; s[i] != '\0'; i++)
		temp_s[i] = s[i];
	temp_s[i - 1] = '\0';

	s = temp_s;
}
