#include <stdio.h>

/**
 *  * main - entry point
(*
 * Description: print hexadecimal numbers)?
 *
 * Return: 0
 */

int main(void)
{
    int n = 0;
    char a;
			
	for(; n < 10; n++)
	{
		putchar('0' + n);
    	}
				
	for(a = 'A'; a <= 'F'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
