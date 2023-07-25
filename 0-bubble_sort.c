#include "sort.h"
/**
 * bubble_sort - sort list lements from min to max value
 * @list: list
 * @length: list length
 */
void bubble_sort(int *list, size_t length)
{

	size_t i, index, tmp = 0;

	if (length < 2)
		return;
	while (i < length)
	{
		while (index < length)
		{
			if (list[index] > list[index + 1] && list[index + 1])
			{
				tmp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = tmp;
				array_print(list, length);
			}
			index++;
		}
		index = 0;
		i++;
	}
}
