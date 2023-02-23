#include "main.h"
/**
 * largest_number - Prints largest number
 * @ja: considered first
 * @je: second
 * @ji: third
 *
 * Return: 0
 */
int largest_number(int ja, int je, int ji)
{
	int largest_num;

	if (ja > je && ja > ji)
	{
		largest_num = ja;
	}
	else if (ja > je && ji > ja)
	{
		largest_num = ji;
	}
	else if (ja > ji)
	{
		largest_num = je;
	}
	else
	{
		largest_num = ji;
	}
	return (largest_num);
}
