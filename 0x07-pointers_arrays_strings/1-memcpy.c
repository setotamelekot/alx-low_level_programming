#include "main.h"

/**
 * _memcpy - c++
 * @dest: c++
 * @src: c++
 * @n: c++
 *
 * Return: c++
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
