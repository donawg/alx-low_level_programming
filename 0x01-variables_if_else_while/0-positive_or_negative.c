#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random number, and prints output based on it
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
		int n;
			srand(time(0));
				n = rand() - RAND_MAX / 2;
				printf("%d ", n);
				if (n > 0)
				{
					printf("is zero");
				}
				if (n < 0)
				{
					printf("is negative");
				}
				if (!n)
				{
					print("is zero");
				}
				printf("\n");
				return (0);
}
