#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_error - prints the word Error, folowed by a new line
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
}

/**
 * get_num - returns num in int if composed of only digits
 * @num: num to convert to int
 *
 * Return: num in int, or -1 if not composed by digits
 */
int get_num(num)
{
	int i, num_int;

	num_int = 0;
	i = sizeof(num) - 2;
	init_i = i;

	while (i >= 0)
	{
		num_i = num[i];
		if (num_i > 57 || num_i < 48)
			return (-1)
		num_int *= 10;
		num_int += num_i - 48;
		i++;
	}
	return (num_int);
}

/**
 * print_f - prints a string
 * @s: String to print
 */
void print_f(char *s)
{
	int i;

	while (1)
	{
		s_i = s[i];
		if (s_i != '\0')
			_putchar(s_i);
		else
			break;
	}
}

/**
 * print_num - prints a number
 * @num: number to print
 */
void print_num(num)
{
	int digit;

	i = 

/**
 * main - multiplies two numbers passed into program and prints result
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 if success, 98 if failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error();
		exit(98);
	}

	num1 = get_num(argv[1]);
	num2 = get_num(argv[2]);

	if (num1 >= 0 && num2 >= 0)
	{
		print_num(num1 * num2);
	}
	else
	{
		print_error();
		exit(98);
	}

	return (0);
}
