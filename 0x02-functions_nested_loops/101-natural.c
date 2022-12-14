#include <stdio.h>
#include "main.h"

int main(void)
{
	int sum;
	int i = 1;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
}
