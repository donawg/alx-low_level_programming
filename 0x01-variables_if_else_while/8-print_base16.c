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
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
