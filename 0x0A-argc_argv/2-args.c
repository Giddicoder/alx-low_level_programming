#include <stdio.h>

/**
 * main - prints all args
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int e;

	for (e = 0 ; e < argc ; e++)
		printf("%s\n", argv[e]);
	return (0);
}
