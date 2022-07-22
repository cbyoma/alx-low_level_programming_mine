#include "main.h"

/**
 * _puts - This function is called by the main function
 *
 * @str: the assign string char
 * return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
