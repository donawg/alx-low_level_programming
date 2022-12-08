#include <stdio.h>

/**
 * main - prints a quote then exits unsuccesfully
 *
 * Return: 1 (FAILURE)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(quote, sizeof(quote), 1, stderr);
	return (1);
}
