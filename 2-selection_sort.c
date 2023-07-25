#include "sort.h"

/**
 * selection_sort - func that sorts an array of integers in ascending order
 * using selection sort algorithm
 * @size: length of the array
 * @array: the array of elements
 */

void selection_sort(int *array, size_t size)
{
	size_t i, indx;
	int k, tmp, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		k = i;
		flag = 0;
		for (indx = i + 1; indx < size; indx++)
		{
			if (array[k] > array[indx])
			{
				k = indx;
				flag += 1;
			}
		}
		tmp = array[i];
		array[i] = array[k];
		array[k] = tmp;
		if (flag != 0)
			print_array(array, size);
	}
}
