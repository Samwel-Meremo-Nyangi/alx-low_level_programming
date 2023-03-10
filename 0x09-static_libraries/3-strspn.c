#include "main.h"
/**
 * _strspn - lengnth of substring
 * @s: input segment
 * @accept: has the bytes
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int a = 0;
        int alx;

        while (*s)
        {
                for (alx = 0; accept[alx]; alx++)
                {
                        if (*s == accept[alx])
                        {
                                a++;
                                break;
                        }
                        else if (accept[alx + 1] == '\0')
                                return (a);
                }
                s++;
        }
        return (0);
}
