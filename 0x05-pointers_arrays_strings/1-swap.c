#include "main.h"

/*
 *int c - assigning the address of *a to c
 *@a: a pointer dereference for changing the value of the variable a
 *@b: a pointer deference for changing the value of the variable b
 *swap_int  - swaps two integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;	
	*b = c;
}
