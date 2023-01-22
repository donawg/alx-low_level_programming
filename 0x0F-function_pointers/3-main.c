#include "3-calc.h"

/**
 * main - lets user enter calculation of ints and operator to calc
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Errors: 98 for wrong num of inputs,
 *         99 for bad operator,
 *         100 for div or mod by 0
 * Return: Result of calculation, or error message and code
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	op_func = get_op_func(op);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if (!num2 && (!strcmp(op, "/") || !strcmp(op, "%")))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(num1, num2));

	return (0);
}
