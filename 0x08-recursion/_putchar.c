#include "main.h"
#include <unistd.h>
/**
 * _putchar writes character c to stdout
 * @c: is thecharacter to print
 *
 * Return: when success 1.
 * On error, -1 is returned, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
