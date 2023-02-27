#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: pointer to check
 * Return: void
 */
void puts_half(char *str)
{
	int ka = 0;
	int n = 0;

	while (str[ka] != '\0')
		ka += 1;
	n = ka / 2;
	if (ka % 2 == 1)
		n += 1;
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
