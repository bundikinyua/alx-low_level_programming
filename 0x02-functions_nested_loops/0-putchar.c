#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * On error, -1 is returned, and error is set appropriately.
 * return : on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
