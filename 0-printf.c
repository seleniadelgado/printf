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

        consp green[] = {
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
	int num_printed;

        va_start(args format);

	if (format == NULL)
		return(-1);

        while (format[i] != '\0')
        {
                if (format[i] == '%')
		{
			while (j < 5)
                        {
                                if (format[i + 1] == *(green[j].prin))
				{
					num_printed += (green[j].type(args))
					break;
				}
			}
                                else
					j++;

		if (j = 5)
			(write(1, error, sizeof(5)));
		}
		i++;

	if (format != '%')
		return(format);

        va_end(args)
}
