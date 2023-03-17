#include <stdio.h>
/**
 * main - void
(*
 * Description: using the main function)?
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
