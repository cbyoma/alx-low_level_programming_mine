#include "main.h"

/**
* _puts_recursion - This is a function that is called by main function
* @s: s is a pointer variable of data type char
*
* Return - Nothing
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
