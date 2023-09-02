#include <stdio.h>
#include "main.h"

/**
 * returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
