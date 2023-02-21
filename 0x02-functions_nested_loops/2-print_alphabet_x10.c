#include "main.h"
/**
 * print_alphabet_x10 - repeats lowercases x10
 *
 */
void print_alphabet_x10(void)
{
	char m;
	int d;

	d = 0;
	while (d < 10)
	{
		m = 'a';
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		d++;
	}
}
