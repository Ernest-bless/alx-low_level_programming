#include "main.h"
#include <stdlib.h>

/**
  * str_concat - cat two strings
  * @s1: input 1
  * @s2: input 2
  * Return: Cat of s1 and s2.
  */
char *str_concat(char *s1, char *s2)
{
	char *cctt;
	int p, q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = q = 0;
	while (s1[p] != '\0')
		p++;
	while (s2[q] != '\0')
		q++;
	cctt = malloc(sizeof(char) * (p + q + 1));

	if (cctt == NULL)
		return (NULL);
	p = q = 0;
	while (s1[p] != '\0')
	{
		cctt[p] = s1[p];
		p++;
	}

	while (s2[q] != '\0')
	{
		cctt[p] = s2[q];
		p++, q++;
	}
	cctt[p] = '\0';
	return (cctt);
}
