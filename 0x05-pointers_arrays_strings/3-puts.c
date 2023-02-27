#include "main.h"
/**
 * _puts - puts string to standard output
 * @str: string to return
 * Return: stringlength
 */
void _puts(char *str)
{
	int lx = 0;

	while (str[lx] != '\0')
	{
		_putchar(str[lx]);
		lx++;
	}
	_putchar('\n');
}
