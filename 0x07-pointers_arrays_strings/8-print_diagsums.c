#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - sums diags of a
*
* @a: function parameter
* @size: function parameter
*/
void print_diagsums(int *a, int size)
{
	int con, sumad1 = 0, sumad2 = 0;
	for (con = 0; con < (size * size); con += size + 1)
		sumad1 = sumad1 + a[con];
	for (con = size - 1; con < (size * size) - 1; con += size - 1)
		sumad2 = sumad2 + a[con];
	printf("%d, %d\n", sumd1, sumad1);	
}
