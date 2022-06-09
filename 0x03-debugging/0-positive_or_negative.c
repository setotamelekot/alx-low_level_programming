#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a number to the variable n each time it is excuted
 * and print the last digit of a number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%d is positive\n", n);
	}

