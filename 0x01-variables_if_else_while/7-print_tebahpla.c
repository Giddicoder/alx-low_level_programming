#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char e;

	for (e = 'z' ; e >= 'a' ; e--)
		putchar(e);
	putchar('\n');
	return (0);
}
