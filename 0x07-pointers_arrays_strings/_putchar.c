#include <unistd.h>

/**
 * _putchar - writes the charcher c to stdout
 * @c: character to be printed
 * Return: 1 (0Success)
 * on error, -1 is returned, and errno is set appriopriately
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
