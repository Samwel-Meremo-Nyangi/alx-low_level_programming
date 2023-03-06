#include "main.h"
/**
 * rev_string - array is reversed
 * @n: integer parameters
 * Return: 0
 */
void rev_string(char *n)
{
	int doing = 0;
	int hard = 0;
	char things;

	while (*(n + doing) != '\0')
	{
		doing++;
	}
	doing--;

	for (hard = 0; hard < doing; hard++, doing--)
	{
		things = *(n + hard);
		*(n + hard) = *(n + doing);
		*(n + doing) = things;
	}
}
/**
 * infinite_add - adds numbers
 * @n1: text1 to be converted to number
 * @n2: text2
 * @r: buffer pointer
 * @size_r: buffer size
 * Return: result's pointer or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int infi = 0, doing = 0, hard = 0, bufferdigits = 0;
	int nite1 = 0, nite2 = 0, things_toAdd = 0;

	while (*(n1 + doing) != '\0')
		doing++;
	while (*(n2 + hard) != '\0')
		hard++;
	doing--;
	hard--;
	if (hard >= size_r || doing >= size_r)
		return (0);
	while (hard >= 0 || doing >= 0 || infi == 1)
	{
		if (doing < 0)
			nite1 = 0;
		else
			nite1 = *(n1 + doing) - '0';
		if (hard < 0)
			nite2 = 0;
		else
			nite2 = *(n2 + hard) - '0';
		things_toAdd = nite1 + nite2 + infi;
		if (things_toAdd >= 10)
			infi = 1;
		else
			infi = 0;
		if (bufferdigits >= (size_r - 1))
			return (0);
		*(r + bufferdigits) = (things_toAdd % 10) + '0';
		bufferdigits++;
		hard--;
		doing--;
	}
	if (bufferdigits == size_r)
		return (0);
	*(r + bufferdigits) = '\0';
	rev_string(r);
	return (r);
}
