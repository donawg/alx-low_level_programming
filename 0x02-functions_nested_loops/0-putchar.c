#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char s[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(s[i]);
	}

	return (0);
}
