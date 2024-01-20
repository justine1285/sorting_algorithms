#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bbble sort algorithm
 * @array: an array of integers
 * @size: size of array @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t k, z, temp;



	if (array)
	{
		/* second loop for swapping */
		for (k = 0; k < size - 1; k++)
		{
			for (z = 0; z < size - 1 - k; z++)
			{
				if (array[z] > array[z + 1])
				{
					temp = array[z]; /* stores value temporary for swap */
					array[z] = array[z + 1];
					array[z + 1] = temp;
					print_array(array, size); /* prints array for every swap */
				}
			}
		}
	}
}
