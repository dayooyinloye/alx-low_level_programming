#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

/**
 * main - entry point
(*
 * Description: print all single digit numbers)?
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;
	for (; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
