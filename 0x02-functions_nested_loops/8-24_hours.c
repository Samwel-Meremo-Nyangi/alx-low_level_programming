#include "main.h"
/**
 * jack_bauer - longest day of his life
 */
void jack_bauer(void)
{
	int z, f;

	z = 0;
	while (z < 24)
	{
		f = 0;
		while (f < 60)
		{
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			_putchar(':');
			_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
			_putchar('\n');
			f++;
		}
		z++;
	}
}
