#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		/* if i doesn't correspond to 9 */
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
