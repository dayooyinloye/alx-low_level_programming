#include <unistd.h>

/**
 * main - entry point
 *
 * Description: the function main)?
 * Return: Always 1 (success)
 */
int main(void)
{
	char message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}

