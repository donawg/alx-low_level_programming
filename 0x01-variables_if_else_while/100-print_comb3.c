#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	for (int i = 48; i < 57; i++)
	{
		for (int j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			/* if i doesn't correspond to 9 */
			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
