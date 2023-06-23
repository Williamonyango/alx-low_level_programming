#include <unistd.h>
/**
 * _putchar - writes the character to standard output
 * @c: the character to print
 * Return: 1 if success
 * on error, -1 is returned.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
