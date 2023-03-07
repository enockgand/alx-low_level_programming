#include "main.h"

/**
 * jack_bauer - prints every minute of jack bauer's 24-hour day
 * Return: ...
 */
void jack_bauer(void)
{
	int a1, b1, c1, d1;

	for (a1 = 0; a1 <= 2; a1++)
	{
		for (b1 = 0; b1 <= 9; b1++)
		{
			if ((a1 <= 1 && b1 <= 9) || (a1 <= 2 && b1 <= 3))
			{
				for (c1 = 0; c1 <= 5; c1++)
				{
					for (d1 = 0; d1 <= 9; d1++)
					{
						_putchar(a1 + '0');
						_putchar(b1 + '0');
						_putchar(58);
						_putchar(c1 + '0');
						_putchar(d1 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
