#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	for (int i = 48; i < 56; i++)
	{
		for (int j = i + 1; j < 57; j++)
		{
			for (int k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				/* if ijk doesn't correspond to 789 */
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
