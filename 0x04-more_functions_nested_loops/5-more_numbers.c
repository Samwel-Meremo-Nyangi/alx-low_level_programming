#include "main.h"
/**
 * more_numbers - prints more numbers
 */
void more_numbers(void)
{
	int k, l;

	for (k = 1; k <= 10; k++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l >= 10)
				_putchar('1');
			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
