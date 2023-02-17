#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry program bloc
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int y;
	int h = 0;

	while (h < 10)
	{
		y = 0;
		while (y < 10)
		{
			if (h != y && h < y)
			{
				putchar('0' + h);
				putchar('0' + y);

				if (y + h != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}
