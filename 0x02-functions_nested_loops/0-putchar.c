#include <unistd.h>
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */
int _putchar(char c)
{
      return (write(1, &c, 1));
}

