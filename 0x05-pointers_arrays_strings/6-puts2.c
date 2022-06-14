#include "main.h"

/**
 * puts2 - This function prints one char out of 2 of a string
 * @str: The string to be treated
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
