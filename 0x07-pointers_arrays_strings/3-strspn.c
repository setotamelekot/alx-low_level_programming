#include "main.h"

/**
 * _strspn - ++
 * @s: ++
 * @accept: ++
 * Return: ++
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (s[a] != accept[b])
			break;
	}
	return (a);
}
