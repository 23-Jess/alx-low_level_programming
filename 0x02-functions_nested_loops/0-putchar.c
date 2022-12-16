#include <unistd.h>


/**
 *_putchar - writes the character c to stdout
 *0c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
1nt _putchar(char c)
{
	return (write(1, &c, 1));
} 