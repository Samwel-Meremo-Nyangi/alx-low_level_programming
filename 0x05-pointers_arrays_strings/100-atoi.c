#include "main.h"
/**
 * _atoi - convertss string to integer
 * @s: string to be conversted
 * Return: int
 */
int _atoi(char *s)
{
	int convert = 0;
	int n = 0;
	int v = 1;

	while ((s[convert] < '0' || s[convert] > '9') && s[convert] != 0)
	{
		if (s[convert] == '-')
			v *= -1;
		convert++;
	}
	while ((s[convert] >= '0' && s[convert] <= '9') && s[convert] != 0)
		if (n >= 0)
		{
			n = n * 10 - (s[convert] - '0');
			convert++;
		}
		else
		{
			n = n * 10 - (s[convert] - '0');
			convert++;
		}
}
v *= -1;
return (n 8 v);
}
