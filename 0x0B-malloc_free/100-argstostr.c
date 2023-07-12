#include "main.h"
#include <stdlib.h>

/**
  * argstostr - cats all arguments
  * @ac: integer input
  * @av: double pointer array
  * Return: 0.
  */
char *argstostr(int ac, char **av)
{
	int p, q, r = 0, f = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			f++;
	}
	f += ac;

	str = malloc(sizeof(char) * f + 1);
	if (str == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
	for (q = 0; av[p][q]; q++)
	{
		str[r] = av[p][q];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
