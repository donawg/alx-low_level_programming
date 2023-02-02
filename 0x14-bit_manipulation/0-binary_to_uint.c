#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary
 *
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, sclr;
	int i;

	if (!b)
		return (0);

	uint = 0;
	sclr = 1;

	for (i = 0; b[i] != '\0'; i++)
		continue;
	i--;

	for (; i >= 0; i--)
	{
		if (b[i] < 48 || b[i] >= 58)
			return (0);
		uint += (b[i] - 48) * sclr;
		sclr <<= 1;
	}

	return (uint);
}
