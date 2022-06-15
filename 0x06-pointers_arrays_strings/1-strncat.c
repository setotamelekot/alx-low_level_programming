#include "main.h"

/**
 * _strncat - concatenates 2 strings
 *  @dest: destination value
 *  @src: source value
 *  @n: limit of the concatenation
 *
 *  Return: porinter to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	desr[dlen + n + 1] = '\0';

	return (dest);
}
