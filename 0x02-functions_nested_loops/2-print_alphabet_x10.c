#include "main.h"

/**
 * print_alphabet_x10 - This ia to print out alphabet a to z and times it by 10
 *
 * return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
