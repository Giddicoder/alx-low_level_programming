#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		if (b != 'e' && b != 'q')
			putchar(b);
	putchar('\n');
	return (0);
}
