#include "main.h"

/**
 * main - prints the alphabet in lower case, then \n
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	int i;
	
	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
}
