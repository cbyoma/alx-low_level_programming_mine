#include <stdio.h>
#include "main.h"

/**
 * main - headers goes there
 *
 * Return: 0 betty style doc for function main goes there
 */

int main(void)
{
	char i[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		putchar(i[a]);
	}
	putchar('\n');
	return (0);
}
