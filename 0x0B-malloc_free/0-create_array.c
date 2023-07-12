#include "main.h"
#include <stdlib.h>

/**
  * create_array - creayes an array of chars, and initializes
  * it with a specific char
  * @size: array size
  * @c: char
  * Return: Points to array, otherwise Null.
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int p;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		str[p] = c;
	return (str);
}
