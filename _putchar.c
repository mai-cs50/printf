#include "main.h"

/**
 * _putchar. Writes the character
 * @c; The character to be printed
 *
 * Return; 1, on success.
 * On error 1 is returned.
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer. Saves the character in the buffer
 * @c; Character to be saved
 *
 * Return; 1
 **/
int buffer(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buf, i);
		i = 0;
	}

	if (c != -1)
		buf[i++] = c;

	return (1);
}

