#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order.
 * @array: array
 * @size: size array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		size_t jmin = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jmin])
			{
				jmin = j;
			}
		}
		if (jmin != i)
		{
			tmp = array[i];
			array[i] = array[jmin];
			array[jmin] = tmp;
			print_array(array, size);
		}
	}
}
