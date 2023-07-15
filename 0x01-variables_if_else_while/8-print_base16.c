#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int e;
	char d;

	for (e = 0 ; e <= 9 ; e++)
		putchar(e + '0');
	for (d = 'a' ; d <= 'f' ; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
