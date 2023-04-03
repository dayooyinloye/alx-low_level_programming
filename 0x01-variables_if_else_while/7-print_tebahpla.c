#include <stdio.h>
/**
 * main - Entry point
(* 
 * Description: main prints alphabet in reverse)?
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
