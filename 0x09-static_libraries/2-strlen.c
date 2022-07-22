#include "main.h"
#include <stdio.h>

/**
 * _strlen - This loop will be caaled by the main loop
 * @s: This ia a pointer
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);
}
