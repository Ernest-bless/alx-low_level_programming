#include "main.h"
/**
 * main - Entry point
 *
 * Description:  a function that checks for lowercase character.
 *
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
if (c >=97 && c <= 122)
{
  return(1);
}
else
{
return(0);
}
_putchar('\n');
}
