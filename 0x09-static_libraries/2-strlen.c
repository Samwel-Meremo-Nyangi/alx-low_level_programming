#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: to be checked
 * Return: qn
 */
int _strlen(char *s)
{
        int qn = 0;

        for (; *s++;)
                qn++;
        return (qn);
}
