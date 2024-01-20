#include "sort.h"

/**
 * swap - swaps the values at two different indices of an array
 * @first: value of first index
 * @second: value of second index
 */
void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: input aray of integers
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}

		if (i != min)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
