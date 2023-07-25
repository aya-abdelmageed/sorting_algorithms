#include "sort.h"

/**
 * selection_sort - func that sorts an array of integers in ascending order
 * using selection sort algorithm
 * @length: size of the list
 * @list: the list
 */

void selection_sort(int *list, size_t length)
{
	size_t i, indx;
	int k, tmp, flag = 0;

	if (list == NULL)
		return;
	for (i = 0; i < length; i++)
	{
		k = i;
		flag = 0;
		for (indx = i + 1; indx < length; indx++)
		{
			if (list[k] > list[indx])
			{
				k = indx;
				flag += 1;
			}
		}
		tmp = list[i];
		list[i] = list[k];
		list[k] = tmp;
		if (flag != 0)
			array_print(list, length);
	}
}
