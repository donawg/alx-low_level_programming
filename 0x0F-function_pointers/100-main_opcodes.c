#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints a specific number of opcodes
 * @argc: number of arguments passed in
 * @argv: arguments passed in
 *
 * Return: 0 for success. 1 for incorrect argument count. 2 for negative bytes.
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(10);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		if (((char *) main) + i == (char *) next)
			break;
		printf("%02x%c", *(((unsigned char *) main) + i),
				 (i == bytes - 1) ? '\n' : ' ');
	}

	return (0);
}

/**
 * next - pointer for next function
 *
 * Return: 0.
 */
int next(void)
{
	return (0);
}
