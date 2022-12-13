#include "main.h"

/**
 * jack_bauer - prints all minutes from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h0, h1, m0, m1;
	int h = 0, m = 0;

	while (h < 24)
	{
		m = 0;

		while (m < 60)
		{
			h0 = '0' + (h / 10);
			h1 = '0' + (h % 10);
			m0 = '0' + (m / 10);
			m1 = '0' + (m % 10);
			_putchar(h0);
			_putchar(h1);
			_putchar(':');
			_putchar(m0);
			_putchar(m1);
			_putchar('\n');
			m++;
		}

		h++;
	}
}
