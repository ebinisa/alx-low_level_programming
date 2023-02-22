#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character c to stdout
 * @c: The character to print
 *
 * Return: Success 1.
 * On error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

