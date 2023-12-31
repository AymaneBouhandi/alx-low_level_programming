#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input unsigned long number
 * @index: index starting from "0" of the bit we want to get
 * Return: value of the bit at index, otherwise "-1".
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
