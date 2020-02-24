#include <stdio.h>
#include "sort.h"

/**
 * partition - partition of array
 * @array: array
 * @f: first element
 * @h: heigth element
 * @size: size array
 *
 * Return: array
 */

size_t partition(int *array, size_t f, size_t h, size_t size)
{
	size_t i, j;
	int tmp, pivot;

	pivot = array[h];
	i = f - 1;
	for (j = f; j < h; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[h] < array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[h];
		array[h] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort2 - sorts an array of integers in ascending order.
 * @array: array
 * @f: first element
 * @h: heigth element
 * @size: size array
 *
 */

void quick_sort2(int *array, ssize_t f, ssize_t h, size_t size)
{
	ssize_t pivot;

	if (f < h)
	{
		pivot = partition(array, f, h, size);
		quick_sort2(array, f, pivot - 1, size);
		quick_sort2(array, pivot + 1, h, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order.
 * @array: array
 * @size: size array
 *
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort2(array, 0, size - 1, size);
}
