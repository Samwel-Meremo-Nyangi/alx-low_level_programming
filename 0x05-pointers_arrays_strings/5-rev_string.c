#include "main.h"
/**
 * rev_string - reverses the string output
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int lk = 0;
	char char1;

	while (*(s + a) != '\0')
		a += 1;
	a -= 1;

	while (lk < a)
	{
		char1 = s[a];
		s[a] = s[lk];
		s[lk] = char1;
		lk++;
		a--;
	}
}
