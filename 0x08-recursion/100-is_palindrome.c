#include "main.h"
int pal_checker(char *s, int iterator, int empty);
int _strlen_recursion(char *s);
/**
 * is_palindrome -returns 1 if a palindrom, otherwise 0
 * @s: string to reverse
 * Return: 1 a palindrom, 0 not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_checker(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns lenth of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * pal_checker - checks for palindrome if empty
 * @s: string
 * @iterator: iteator value
 * @empty: for empty length
 * Return: 1 if palindrome, otherise 0
 */
int pal_checker(char *s, int iterator, int empty)
{
	if (*(s + iterator) != *(s + empty - 1))
		return (0);
	if (iterator >= empty)
		return (1);
	return (pal_checker(s, iterator + 1, empty - 1));
}
