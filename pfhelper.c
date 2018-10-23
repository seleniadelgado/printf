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

	c = (va_arg(args)
	if (c == NULL)
		return (0);
	write(1, c, sizeof(char))
		return (c);
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
	if (s[i] == '\0')
	return (s);
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
	p = va_arg(arg, char)
		write(1, 37, 6)
		return (p);
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
	int d = 0;

	d = va_arg(arg char);
	if ((d < 0) || (d > 0))
		d++;
	return (d);

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
	int i = 0;

	i = va_arg(arg, char)
		if (i > 0);

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
	int z = 0;
	int i;

	while (z > 10)
	{
		i = z % 10;
		putchar(i);
		z = z / 10
			i++;
	}
	if (z < 10)
	z = i;
	putchar (i);
/**
	(input char * into reverse string function)
*/
	returns (0);
}
