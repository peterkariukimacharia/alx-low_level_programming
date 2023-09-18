#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * This function takes two pointers to integers as parameters and swaps the
 * values they point to.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;  /* Store the value pointed to by a in a temporary variable. */
	*a = *b; /* Update the value pointed to by a with the value pointed to by b. */
	*b = m;  /* Update the value pointed to by b with the temporary variable. */
}
