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
	write(1, &c, sizeof(c));
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

	*s = va_arg(args, int);
	i = 0;
	if (s == NULL)
		return (0);
	while(s[i] != '\0')
		i++;
	write(1, &s, i);
		return (0);
}
/**
 * print_pct - function that prints '%' symbol.
 * @args: arguments passed to the function.
 * Return: returns a %.
 */
int print_pct(va_list args)
{
	char *p;

	*p = va_arg(args, int);
	write(1, &p, sizeof(char));
		return (0);
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

	ptr = 0;

	d = (va_arg(args, int));
	ptr = itoa_p(d);
	printf("%s\n", ptr);
	_putcharf(d);
	return (0);
}
/**
 * print_i - function to print an integer.
 * @args: parameter used to test integer.
 * Return: 0.
 */
int print_i(va_list args)
{
	int i;
	char *str;

	str = 0;

	i = (va_arg(args, int));
	str = itoa_p(i);
	printf("%s\n", str);
	_putcharf(i);
	return (0);
}
/**
 * itoa_p - function to convert an integer into a string.
 * @args: parameter to change to a string.
 * Return: 0.
 */
char *itoa_p(int i)
{
	
	unsigned int z;
	unsigned int mod;

	z = 0;
	mod = 0;
	while (i > 10)
	{
		z = i % 10;
		mod += z;
		z = 0;
		z = i / 10;
		i = z;
		z = 0;
		_putcharf(mod);
		      mod = 0;
	}
	if (i < 10)
	{
		z = i;
		_putcharf(i);
	}
	return(0);
}
