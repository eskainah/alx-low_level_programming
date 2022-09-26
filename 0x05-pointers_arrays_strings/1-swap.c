#include "main.h"

/*
 *swap_int - This function swaps the value of two integers
 *int c - assigning the address of *a to c
 *@a: a pointer dereference for changing the value of the variable a
 *@b: a pointer deference for changing the value of the variable b
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
