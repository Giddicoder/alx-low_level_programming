#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int e;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	e = n % 10;
	if (e > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, e);
	else if (e == 0)
		printf("Last digit of %d is %d and is 0\n", n, e);
	else if (e < 6 && e != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, e);
	return (0);
}
