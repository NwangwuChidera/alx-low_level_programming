#include "main.h"

/**
 * *_strncat - concatenates two stings and uses n bytesfrom src
 * @dest: string to be concatenated
 * @src: character string
 * @n: number of bytes in src
 * Return: the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, n;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}


