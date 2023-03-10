#include "main.h"
/**
 * _strcmp - comparing string values
 * @s1: string value1
 * @s2: string value2
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
        int cmp;

        cmp = 0;
        while (s1[cmp] != '\0' && s2[cmp] != '\0')
        {
                if (s1[cmp] != s2[cmp])
                {
                        return (s1[cmp] - s2[cmp]);
                }
                cmp++;
        }
        return (0);
}
