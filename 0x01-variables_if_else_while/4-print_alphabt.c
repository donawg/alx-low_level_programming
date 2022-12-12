#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 113 && i != 101)
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
