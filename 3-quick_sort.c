#include "sort.h"
/**
 * quick_sort_rec - sorts an array of integers in ascending order using
 * the Selection sort algorithm using recursion
 * @array: pointer to array
 * @size: size of the array
 * @array_init: initial pointer to array@array_init: initial pointer to array
 * @size_init: initial size of the array
 */
void quick_sort_rec(int *array_init, size_t size_init, int *array, size_t size)
{
	size_t j, aux;
	int aux2;
	int i = -1, n, pivot = array[size - 1];

	if (array && size > 1)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] < pivot)
			{
				i++;
				aux = i;
				if (aux != j && array[j] != array[aux])
				{
					n = array[j];
					array[j] = array[i];
					array[i] = n;
					print_array(array_init, size_init);
				}
			}
		}
	}
}
