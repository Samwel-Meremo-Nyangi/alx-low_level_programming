#include <stdio.h>
#include "main.h"
/**
 * rot13 - substitution cipher to encode
 * and rotate by 13
 * @k: string pointer
 * Return: pointer to k
 */
char *rot13(char *k)
{
	int ro, t13;
	char cip[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char her[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (ro = 0; k[ro] != '\0'; ro++)
	{
		for (t13 = 0; t13 < 52; t13++)
		{
			if (k[ro] == cip[t13])
			{
				k[ro] = her[t13];
				break;
			}
		}
	}
	return (k);
}
