#include "sort.h"

/**
 * bubble_sort -  function that sorts an array of integers in ascending order.
 * @array: Array
 * @size: size array
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			printf("%d", array[j]);
			printf(", ");
		}
		printf("%d", tmp);
		printf("\n");
	}
}
