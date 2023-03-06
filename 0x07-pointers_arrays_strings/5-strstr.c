#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hayst = haystack;
		char *ack = needle;

		while (*hayst == *ack && *ack != '\0')
		{
			hayst++;
			ack++;
		}
		if (*ack == '\0')
			return (haystack);
	}
	return (0);
}
