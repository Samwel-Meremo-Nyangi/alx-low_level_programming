#include "main.h"
/**
 * leet - encoding
 * @s: input value
 * Return: s value
 */
char *leet(char *s)
{
	int le, et;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (le = 0; s[le] != '\0'; le++)
	{
		for (et = 0; et < 10; et++)
		{
			if (s[le] == s1[et])
			{
				s[le] = s2[et];
			}
		}
	}
	return (s);
}
