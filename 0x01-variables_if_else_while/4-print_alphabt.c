#include<stdio.h>
/**
 *
 * main - entry code
 */

int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
			ch++;
	}
		putchar('\n');
		return (0);
}


				

