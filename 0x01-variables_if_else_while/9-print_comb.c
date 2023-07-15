#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int e;

	for (e = 0 ; e <= 9 ; e++)
	{
		putchar(e + '0');
		if (e != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
