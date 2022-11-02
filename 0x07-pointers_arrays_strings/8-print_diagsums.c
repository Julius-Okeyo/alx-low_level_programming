#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < (size * size); index += (size + 1))
		sum1 += a[index];
	for (index = (size - 1); index <= (size * size - size); index += (size - 1))
		sum2 += a[index];
	printf("%d, %d\n", sum1, sum2);
}
