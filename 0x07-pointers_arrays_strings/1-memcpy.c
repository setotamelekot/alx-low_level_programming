#include "main.h"

/**
 * _memcpy - ++
 * @dest: ++
 * @src: ++
 * @src: ++
 * @n: ++
 * Return: ++
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
