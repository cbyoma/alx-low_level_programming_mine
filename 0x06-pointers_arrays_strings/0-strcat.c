#include "main.h"

/**
* _strcat - This function is called by main function
* @dest: dest is a char pointer
* @src: src is a char pointer
*
* Return: a char variable
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
