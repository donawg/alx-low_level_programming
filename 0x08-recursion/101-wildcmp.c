#include "main.h"

/**
 * wildcmp - compares two strings for equality
 * @s1: first string to test for
 * @s2: second string to test for
 *
 * Description: s2 can contain *, which can be any and no string
 * Return: 1 if condisered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	char c1, c2;

	c1 = s1[0];
	c2 = s2[0];

	if (c1 == c2 && c1 == '\0')
		return (1);
	if (c1 == c2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (c2 == '*')
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	return (0);
}
