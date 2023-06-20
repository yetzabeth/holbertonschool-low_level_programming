#include "main.h"
/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 **/

void jack_bauer(void)
{
	int H;
	int m;

	for (H = 0; H < 23; H++)
	{
		for (m = 0; m < 59; m++)
		{
			_putchar(H / 10 + '0');
			_putchar(H % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
