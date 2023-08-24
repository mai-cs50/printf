#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * print_Hex - print_Hex
 * @list: int
 *
 * Return: num
 **/
int print_Hex(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);
	p_buff = string_to_upper(p_buff);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Char
 * Return: 1 or 0
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Change the string to uppercase
 * @s: string
 * Return: string
 **/
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
