#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_c - function that prints char.
 * @args: arguments passed into the function.
 *
 * Return: returns a char.
 */
int print_c(va_list args)
{
	char c;

	c = (va_arg(args))
	if (c == NULL)
		return (0);
	write(1, c, sizeof(char))
		return (0);
}

/**
 * print_s - function that prints a string.
 * @args: parameter to print a string.
 *
 *
 * Return: returns a string.
 */
int print_s(va_list args)
{
	char *s;

	s = va_arg(arg, char *);
	int i = 0;
	if (s == NULL)
		return (0);
	While (s[i] != '\0')
		i++;
	write(1, s, i)
		return (0);
}
/**
 * print_pct - function that prints '%' symbol.
 * @args: arguments passed to the function.
 *
 *
 * Return: returns a %.
 */
int print_pct(va_list args)
{
	char *p;
	p = va_arg(arg, char)
		write(1, 37, sizeof(char))
		return (0);
}
/**
 * print_d - function parameter to print a digit.
 * @args: parameter to print a digit.
 *
 *
 * Return: returns a string.
 */
int print_d(va_list args)
{
	char *d;

	d = itoa_p(va_list args);
	write(1, d, sizeof(d));
	return (0);
}
/**
 * print_i - function to print an integer.
 * @args: parameter used to test integer.
 *
 *
 * Return: 0.
 */
int print_i(va_list args)
{
	unsigned int i;

	i = itoa_p(va_list args)
	write(1, i, sizeof(d));
	return (0);
}
/**
 * itoa_p - function to convert an integer into a string.
 * @args: parameter to change to a string.
 *
 * Return: 0.
 */
char *itoa_p(int)
{
	char *s ;
	unsigned int i;
	unsigned int mod;

	while (i > 10)
	{

	}

/**
	(input char * into reverse string function)
*/
	returns (0);
}


