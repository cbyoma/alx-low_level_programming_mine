#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 *
 * @c: Is an int value
 * Return: Always 0.
 */
int _isdigit(int c)
{
	for (c = 0; c < 10; c++)
	{
		if (c == 1)
			c = 1;
		else
			c = 0;
	}

	return (c);
}
