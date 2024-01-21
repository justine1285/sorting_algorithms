#include "sort.h"

/**
 * swap - function swaps values at two array indices
 * @first: first index
 * @second: second index
 */
void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

void _qsort(int *array, int low, int high, int size);

/**
 * quick_sort - function that sorts an array of integers in ascending order
 *		using the Quick sort algorithm
 * @array: enter array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}

/**
 * _qsort - auxillary function for the quick_sort function
 * @array: enter array
 * @low: index for first element
 * @high: index for last element
 * @size: array size
 */
void _qsort(int *array, int low, int high, int size)
{
	int pivot, wall, i;

	if (low < high)
	{
		pivot = high;
		wall = low;
		for (i = low; i < high; i++)
		{
			if (array[i] < array[pivot])
			{
				if (i != wall)
				{
					swap(&array[i], &array[wall]);
					print_array(array, size);
				}
				wall++;
			}
		}
		if (wall != pivot && array[wall] != array[pivot])
		{
			swap(&array[wall], &array[pivot]);
			print_array(array, size);
		}
		_qsort(array, low, wall - 1, size);
		_qsort(array, wall + 1, high, size);
	}
}
