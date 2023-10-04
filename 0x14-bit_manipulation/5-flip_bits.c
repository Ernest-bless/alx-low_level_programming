#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *
 * need to flip to get from one number.
 *
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned int count = 0, r, r1;

        while (!(n == 0 && m == 0))
        {
                r = n & 1;
                r1 = m & 1;
                n = n >> 1;
                m = m >> 1;
                if (r != r1)
                        count += 1;
        }
        return (count);
}
