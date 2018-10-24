#include "holberton.h"

int main(void)
{
	int x;
	int j;

	x = 5;
	j = _printf("hello my age is %i\n", x);
	_printf("i: %i\n j: %i\n", x, j);
	return (x);
}
