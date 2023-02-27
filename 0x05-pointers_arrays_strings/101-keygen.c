#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for 100-crackme
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int g, h, n;
	int pass[100];

	h = 0;
	srand(time(NULL));

	for (g = 0; g < 100; g++)
	{
		pass[g] = rand() % 78;
		h +=  (pass[g] + '0');
		putchar(pass[g] + '0');
		if ((2772 - h) - '0' < 78)
		{
			n = 2772 - h - '0';
			h += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
