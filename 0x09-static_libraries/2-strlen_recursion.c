#include "main.h"

/**
* _strlen_recursion - a function
* @s:a pointer s of data type char
*
* Return: an integer
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
