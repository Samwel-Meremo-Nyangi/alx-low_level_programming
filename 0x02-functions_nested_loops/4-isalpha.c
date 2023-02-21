#include "main.h"
/**
 * _isalpha - looks for alphabets
 * @c: to be checked
 * Return: 1 Success, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
