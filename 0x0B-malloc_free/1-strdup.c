#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns pointer to new allocated space in memory
  * @str: string character
  * Return: 0 always.
  */
char *_strdup(char *str)
{
	char *q;
	int p, w = 0;

	if (str == NULL)
		return (NULL);
	p = 0;
	while (str[p] != '\0')
		p++;

	q = malloc(sizeof(char) * (p + 1));

	if (q == NULL)
		return (NULL);

	for (w = 0; str[w]; w++)
		q[w] = str[w];

	return (q);
}
