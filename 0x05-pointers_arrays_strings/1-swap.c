#include "main.h"
#include <stdio.h>

/**
 * swap_int - This loop will be caaled by the main loop
 * @a: This ia a pointer
 * @b: b is also a pointer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int out;

	out = *a;
	*a = *b;
	*b = out;
}
