#include "main.h"

/**
 * set_bit - prog sets the value of a bit to 1 at a giventhat should be return if errors occure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

