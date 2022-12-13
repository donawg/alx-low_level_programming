#include "main.h"

/**
 * _isalpha - checks if a letter is alphebtic
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c < 123 && c >= 97) || (c < 91 && c >= 65))
	{
		return (1);
	}

	return (0);
}
