#include "main.h"
/**
 * print _alphabet -entry point 
 * return : 0
 */
void print_alphabet(void)
{
	char c = "a";
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
