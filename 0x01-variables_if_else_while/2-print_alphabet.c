#include <stdio.h>

/**
 * main - entry point
(*
 * Description: print letters of the alphabet)?
 *
 * Return: 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alphabet[a]);
	}

	putchar("\n");
	return (0);
}
