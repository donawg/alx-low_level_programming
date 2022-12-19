#inclue "main.h"

/**
 * swap_int - swaps the value of two ints by reference
 * @a: first int to swap
 * @b: second int to swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
