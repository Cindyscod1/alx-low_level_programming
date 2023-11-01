#include "main.h"

/**
 * get_endianness - program help  checks the endianness
 *
  */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}

