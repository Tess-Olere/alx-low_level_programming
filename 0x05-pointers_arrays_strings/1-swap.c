#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first interger to be swaped.
 * @b: The second interger to be swapped.
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
