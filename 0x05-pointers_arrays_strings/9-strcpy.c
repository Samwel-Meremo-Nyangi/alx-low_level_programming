#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: copy destination
 * @src: source integer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
		*(dest + m) = *(src + m);
	}
	*(dest + 1) = '\0';
	return (dest);
}
