#include "main.h"
/**
 * print_rev - reverses string printed
 * @s: string under check
 */
void print_rev(char *s)
{
	int sam, k;

	k = 0;

	while (s[k] != '\0')
		k++;
	for (sam = k -1; sam >= 0; sam--)
	{
		_putchar(s[sam]);
	}
	_putchar('\n');
}
