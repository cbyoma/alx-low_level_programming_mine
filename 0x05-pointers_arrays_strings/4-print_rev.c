#include "main.h"
#include <stdio.h>

/**
 * print_rev - This loop will be caaled by the main loop
 * @s: This ia a pointer
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
