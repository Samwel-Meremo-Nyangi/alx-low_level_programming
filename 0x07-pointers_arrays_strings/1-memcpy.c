#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: memory copy source
 * @dest: memory copy destination
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int co = 0;

	int py = n;

	for (; co < py; co++)
	{
		dest[co] = src[co];
		n--;
	}
	return (dest);
}
