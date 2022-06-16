#include "main.h"



/**
 * infinite_add - ++
 * @n1: ++
 * @n2: ++
 * @r: ++
 * @size_r: ++
 * return: ++
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenS = 0;

	while (*(n1 + len1++))
		;
	while (*(n2 + len2++))
		;
	printf("%d, %d\n", len1, len2);
	return (r);
}
