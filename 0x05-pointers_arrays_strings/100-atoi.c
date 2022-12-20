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
	int s_l, p, i, start, m_count;
	int s_int = 0;

	s_l = _strlen(s) - 1;
	i = 0;
	start = -1;
	m_count = 0;
	while (i <= s_l)
	{
		if (s[i] >= 48 && s[i] < 58)
		{
			start = i;
		}
		else
		{
			if (start >= 0)
				break;
			if (s[i] == '-')
				m_count += 1
		}
		i++;
	}
	p = 1;
	while (start >= 0)
	{
		if (!(s[start] >= 48 && s[start] < 58))
		{
			if (m_count % 2)
				s_int = 0 - s_int;
			break;
		}
		else
		{
			s_int += (s[start] - 48) * p;
			p *= 10;
			start--;
		}
	}
	return (s_int);
}
