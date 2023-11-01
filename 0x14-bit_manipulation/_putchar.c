#include <unistd.h>

/**
 * _putchar - help us write a character the will standard it is very important to always have putchar */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

