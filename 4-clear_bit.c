#include "main.h"
/**
 * sets the value of a bit to 0 at a given index
 *
 * index is the index, starting from 0 of the bit you want to set
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        int val;

        if (index > 63)
                return (-1);
        val = 1 << index;
        *n = *n & (~val);
        return (1);
}
