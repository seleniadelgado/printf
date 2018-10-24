#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct pf
{
	char *prin;
	int (*type)(va_list args);
}consp;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_pct(va_list args);
int print_d(va_list args);
int print_i(va_list args);

int _putcharf(char c);
char *itoa_p(int);
#endif
