#include "main.h"
/**
 * _strpbrk - searches for a string in a byte
 * @s: input string
 * @accept: string
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	int search;

	while (*s)
	{
		for (search = 0; accept[search]; search++)
		{
			if (*s == accept[search])
				return (s);
		}
		s++;
	}
	return (s);
}
