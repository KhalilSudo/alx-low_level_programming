#include "main.h"


/**
 *swap_int- swap value of variable a and b
 *
 * @a: integer pointer
 * @b: integer pointer
 */
void swap_int (int *a, int *b)
{
int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
