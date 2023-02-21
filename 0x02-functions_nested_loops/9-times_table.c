#include "main.h"
/**
 * times_table - displays multiplication table for 9 cells
 */
void times_table(void)
{
	int c, g, y;

	for (c = 0; c < 10; c++)
	{
		for (g = 0; g < 10; g++)
		{
			y = c * g;
			if (g == 0)
			{
				_putchar(y + '0');
			}
			if (y < 10 && g != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			} else if (y >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
