#include "main.h"

/**
 *swap_int() - swaps values of both integers
 *@a : integer 1
 *@b : integer 2
 *Return : no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
