#include "main.h"

/**
  * print_line - draws a straight line
  * @n: Number of times
  * Return: Always 0 success
  */

void print_line(int n)
{
	int i;

	i = n;
	if (i <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
		_putchar('\n');
	}
}
