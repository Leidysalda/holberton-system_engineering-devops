#include "sort.h"

/**
 * selection_sort -  function that sorts an array of integers in ascending order.
 * @array: Array
 * @size: size array
 *
 * Return: Always 0
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, elem;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		elem = i;
		for (j = 0; j < size; ++j)
		{
			if (array[j] < array[elem])
				elem = j;

			temp = array[elem];
			array[elem] = array[i];
			array[i] = temp;
			printf("%d", array[elem]);
			printf(", ");
		}
		printf("%d", array[i]);
		printf("\n");
	}
}
