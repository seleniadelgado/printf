#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_c - function that prints char.
 * @args: arguments passed into the function.
 * Return: returns a char.
 */
int print_c(va_list args)
{
	char c;

	c = (va_arg(args, int));
	if (c == '\0')
		return (0);
	_putcharf(c);
		return (1);
}

/**
 * print_s - function that prints a string.
 * @args: parameter to print a string.
 * Return: returns a string.
 */
int print_s(va_list args)
{
	char *s;
	int i;

	i = 0;
	*s = va_arg(args, int);
	s = va_arg(args, char *);
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	write (1, &s, sizeof(char *));
	write(1, s, i);
		return (i);
}
/**
 * print_d - function parameter to print a digit.
 * @args: parameter to print a digit.
 * Return: returns a string.
 */
int print_d(va_list args)
{
	int d;
	char *ptr;
	int size;

	ptr = 0;

	ptr = malloc(sizeof(char *));
	d = (va_arg(args, int));
	ptr = itoa_p(d);
	size = _strlen(ptr);
	write(1, ptr, size);
	free(ptr);
	return (1);
}
