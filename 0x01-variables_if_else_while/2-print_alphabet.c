#include<stdio.h>
/**
 * main - entry code
 *
 * return : always 0 (success)
 *
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
