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
 * _atoi - converting string to integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int s_l, p;
	int s_int = 0;

	s_l = _strlen(s) - 1;
	p = 1;
	while (s_l >= 0)
	{
		if (s[s_l] == '-')		
		{
			s_int = 0 - s_int;
			break;
		}
		else if (s[s_i] == '+')
		{
			break;
		}
		else
		{
			s_int += (s[s_i] - 48) * p;
			p *= 10;
			s_l--;
		}
	}
	return (s_int);
}
