#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * main - prints the binary representation of a number
 *
 * return: always 0
 */
void print_binary(unsigned long int n)
{
	int c, num = 0;
	unsigned long int value;

	for (c = 63; c >= 0; c--)
	{
		value = n >> c;

		if (value & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
