#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character tp print
 *
 * return: on success 1.
 * on error, 1 is returned, and error is set appropriately.
*/
int _putchar(char C)
{
	return (write(1, &c, 1));
}
