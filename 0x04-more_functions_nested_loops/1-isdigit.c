#include "main.h"

/**
 * _isdigit - function that checks for 0 through to 9
 *@c: parameter to be checked
 * Return: 1 if between 0 and 9 or 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
