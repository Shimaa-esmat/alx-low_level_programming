#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: the pointer of the firest number
 * @b: the pointer of the second number
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	a = *b;
	b = c;
}
