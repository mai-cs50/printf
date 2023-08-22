#include "main.h"
/**
 * _puts - print string
 *
 * @str: char
 *
 * Return: void
 *
*/
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}
/**
 * _putchar - write char
 *
 * @c: char
 *
 * Return: 1 or -1
 *
*/
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
