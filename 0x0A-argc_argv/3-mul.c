#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to int
 * @s: string to  be converted
 * Return: converted string as int
 */
int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
		d++;
	while (a < d && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (b % 2)
				f = -f;
			c = c * 10 + f;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (c);
}
/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array
 * Return: 0 (Success) ,  otherwise 1 (Error)
 */
int main(int argc, char *argv[])
{
	int g, h, product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	g = _atoi(argv[1]);
	h = _atoi(argv[2]);
	product = g * h;

	printf("%d\n", product);

	return (0);
}
