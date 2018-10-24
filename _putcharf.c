#include <unistd.h>

/**
* _putcharf - function that acts as putchar
* @c: Character to print
* Return: 1 on success, -1 if failure
*/

int _putcharf(char c)
{
	return (write(1, &c, 1));
}
