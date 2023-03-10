#include "main.h"
/**
 * _strncpy - copying strings
 * @dest: string1 to copy
 * @src: string2 to copy
 * @n: bytes of string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int cpy;

        cpy = 0;
        while (cpy < n && src[cpy] != '\0')
        {
                dest[cpy] = src[cpy];
                cpy++;
        }
        while (cpy < n)
        {
                dest[cpy] = '\0';
                cpy++;
        }

        return (dest);
}
