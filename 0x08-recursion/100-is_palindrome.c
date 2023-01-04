#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_helper - tests if string is palindrome, checking opposing chars
 * @s: string to test
 * @i: index of left char being checked
 * @j: index of right char being checked
 *
 * Return: 1 if a palindrome, 0 if not
 */
int palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (palindrome_helper(s, i + 1, j + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to test
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int s_len;

	s_len = _strlen_recursion(s);

	return (palindrome_helper(s, 0, s_len - 1));
}
