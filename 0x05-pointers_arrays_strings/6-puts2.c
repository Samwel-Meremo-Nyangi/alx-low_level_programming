#include "main.h"
/**
 * puts2 - puts strings and new lins
 * @str:string under check
 * Return: void
 */
void puts2(char *str)
{
	int alx = 0;

	while (str[alx] != '\0')
	{
		if (alx % 2 == 0)
		{
			_putchar(str[alx]);
		}
		alx++;
	}
	_putchar('\n');
}
