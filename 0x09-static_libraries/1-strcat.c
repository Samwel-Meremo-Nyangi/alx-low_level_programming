#include "main.h"
/**
 * _strncat - concatenates two strings at n bytes
 * @dest: last string
 * @src: first string
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int a, b;

        a = 0;
        while (dest[a] != '\0')
        {
                a++;
        }
        b = 0;
        while (b < n && src[b] != '\0')
        {
                dest[a] = src[b];
                a++;
                b++;
        }
        dest[a] = '\0';
        return (dest);
}
