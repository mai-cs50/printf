#include "main.h"


/**
 * _strlen - l str
 * @str: string
 *
 * Return: l str
 **/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * print - print char
 * @str: string
 *
 * Return: l str
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
