#include "main.h"
/**
 * print_number - printing an integer
 * @n: integer to check
 */
void print_number(int n)
{
	unsigned int samwel;

	if (n < 0)
	{
		samwel = -n;
		_putchar('-');
	}
	else
	{
		samwel = n;
	}
	if (samwel / 10)
	{
		print_number(samwel / 10);
	}
	_putchar((samwel % 10) + '0');
}
