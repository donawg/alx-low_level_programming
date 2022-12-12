#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		for (int j = 0; j < 57; j++)
		{
			for (int k = i; k < 58; k++)
			{
				for (int l = j + 1; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56
						|| k != 57 || l != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
