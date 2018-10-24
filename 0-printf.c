#include "holberton.h"
/**
 * _printf - function that produces output according to a format.
 * @format: constant char format.
 * Return: the numbers that are printed.
 */
int _printf(const char *format, ...)
{
	consp green[] = {
	{"c", print_c},	{"s", print_s},
	{"%", print_pct}, {"d", print_d},
	{"i", print_i}, {NULL, NULL}
	};
	va_list args;
	unsigned int i = 0;
	unsigned int j = 0;
	int num_printed;

	va_start(args, format);
	num_printed = 0;
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (j < 5)
			{
				if (format[i + 1] == *(green[j].prin))
				{
					num_printed += (green[j].type(args));
					i += 1;
					break;
				}
				else
				j++;
			}
		}
		else
		{
			_putcharf(format[i]);
			num_printed += 1;
		}
		i++;
	}
	va_end(args);
	return (num_printed);
}
