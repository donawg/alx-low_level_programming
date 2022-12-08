#include <stdio.h>

/**
 * main - prints a quote then exits unsuccesfully
 *
 * Return: 1 (FAILURE)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			59, 1, stderr);
	return (1);
}
