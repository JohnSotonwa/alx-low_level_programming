#include "main.h"
/*
 *swap_int(int *a, int *b) - swaps values of both integers
 *@a, b : variables ponting to integers
 *Return : no return
 */

swap_int(int *a, int *b) /*swaps value of integers*/
{
	*a = *b;
	*b = *a;
}
