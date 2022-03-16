#include <unistd.h>
#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - write the character C to stdout
 * @c: The character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif
