#include "main.h"

/**
 * clear_bit - sets val of bit to 0 at idx
 * @index: the idx
 * @n: pointer to bit
 * Return: 1 or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit_per_byte = 8;
	unsigned int bit_per_long = sizeof(unsigned long int) * bit_per_byte;

	if (n == NULL || index >= bit_per_long)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
