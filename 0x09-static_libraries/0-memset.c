#include "main.h"
/**
 * _memset - filling memory blocks
 * @s: memory to be filled
 * @b: value
 * @n: bytes to be changed
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
        int indexset = 0;

        for (; n > 0; indexset++)
        {
                s[indexset] = b;
                n--;
        }
        return (s);
}
