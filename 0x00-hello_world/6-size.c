#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char j;
	float k;
	long int l;
	long long int ll;

	printf("Size of a char: %zu byte(s)\n", sizeof(j));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("Size of a float: %zu byte(s)\n", sizeof(k));
	return (0);
}
