#include "main.h"
/**
 * largest_number - returns tje largest of 3 numbers
 * @a:1st interger
 * @b: 2nd interger
 * @c: 3rd interger
 * return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		 largest = c;
	}
	else 
	{
		largest = b;
	}
	return (0);
}

