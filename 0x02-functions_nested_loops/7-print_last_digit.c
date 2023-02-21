#include "main.h"
/**
 * print_last_digit - Prints last digit in number
 * @o: under check
 * Return: last digit
 */
int print_last_digit(int o)
{
	int num;

	if (o < 0)
		o = -o;
	num = o % 10;
	if (num < 0)
		num = -num;
	_putchar(num + '0');
	return (num);
}
