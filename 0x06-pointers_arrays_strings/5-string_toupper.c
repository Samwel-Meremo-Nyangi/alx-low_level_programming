#include "main.h"
/**
 * string_toupper - lowercase to UPPERCASE
 * @n: pointer
 * Return: uppercase
 */
char *string_toupper(char *n)
{
	int upper;

	upper = 0;
	while (n[upper] != '\0')
	{
		if (n[upper] >= 'a' && n[upper] <= 'z')
			n[upper] = n[upper] - 32;
		upper++;
	}
	return (n);
}
