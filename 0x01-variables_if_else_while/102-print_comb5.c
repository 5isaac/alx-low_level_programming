#include <stdio.h>

/** 
 * main -> Entry points
 * and print the last digit
 * Return : always 0
 */
int main(void)
{
	int ch;
	int n;
	for (ch = 48; n <= 57; ch ++)
	{
		for (n = 48; n <=57; n ++)
		{
			putchar(ch);
			putchar(n);
			if (ch != 57 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10); /* this is ascii code for a new line*/

	return(0);
}
