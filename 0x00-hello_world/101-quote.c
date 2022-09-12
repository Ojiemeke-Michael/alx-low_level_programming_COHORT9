#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description - print string of characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" ", 33);
	write(1, "- Dora Korpar, 2015-10-19\n", 26);
	return (1);
}
