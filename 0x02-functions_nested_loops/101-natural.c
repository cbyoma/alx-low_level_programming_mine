#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes and prints the sum of all the multiples of
 *
 * Return: Nothing.
 */

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);

	return (0);
}
