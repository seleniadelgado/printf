#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * printf - function that produces output according to a format.
 * @format - constant char format.
 *
 *
 */
int _printf(const char *format, ...)
{
	printf green[] = {
	{"c", print_c},
	{"s", print_s},
	{"pct", print_pct},
	{"d", print_d},
	{"i", print_i},
	{NULL, NULL}
	};

	va_list args;
	unsigned int i = 0;
	unsigned int j = 0;

	va_start(args format);
	while ((format != NULL) && (format [i] != '\0'))
		while(format[i] != '%')
		{
			if (format[i] == *(green[j].prin))
				write(1, format ,sizeof(format))
					i++;
	}
	if ([format[i]
	va_end(args)
}
