#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *
 * @c: the int c used
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c == 'A')
		c = 1;
	else
		c = 0;

	return (c);
}
