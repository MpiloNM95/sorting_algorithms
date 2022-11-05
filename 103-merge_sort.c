#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * PrintArray - prints array of integers for range of indicies
 * @array: array of values to be printed
 * @iBeg: starting index value
 * @iEnd: ending index value
 */
void PrintArray(int *array, int iBeg, int iEnd)
{
	int i;

	for (i = iBeg; i < iEnd; i++)
		if (i < iEnd - 1)
			printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
}
