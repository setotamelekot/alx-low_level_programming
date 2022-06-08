#include "main.h"

/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 */

void print_alphabet_x10(void)
{ 
	int x;
	int j;

	for (x = 0;  x < 10; x++)
	{
		for (j = 'a';  j <= 'z'; j++)
	{
		 _putchar(j);
	}
	 _putchar('\n');
	}
}
