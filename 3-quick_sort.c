#include "sort.h"

/**
*swap - swap the position of two elements
*@list: list
*@item1: list element
*@item2: list element
*/

void swap(int *list, ssize_t item1, ssize_t item2)
{
	int tmp;

	tmp = list[item1];
	list[item1] = list[item2];
	list[item2] = tmp;
}

/**
 *partition_schema - partition sorting scheme implementation
 *@list: list
 *@first: first list element
 *@last: last list element
 *@length: length of the list
 *Return: return the position of the last element sorted
 */

int partition_schema(int *list, ssize_t first, ssize_t last, size_t length)
{
	int pivot = list[last];
	ssize_t current = first, finder;

	for (finder = first; finder < last; finder++)
	{
		if (list[finder] < pivot)
		{
			if (list[current] != list[finder])
			{
				swap(list, current, finder);
				print_array(list, length);
			}
			current++;
		}
	}
	if (list[current] != list[last])
	{
		swap(list, current, last);
		print_array(list, length);
	}
	return (current);
}

/**
 *quick_sort_implmentt - qucksort algorithm implementation
 *@list: list
 *@first: first list element
 *@last: last list element
 *@length: list length
 */

void quick_sort_implmentt(int *list, ssize_t first, ssize_t last, int length)
{
	ssize_t position = 0;


	if (first < last)
	{
		position = partition_schema(list, first, last, length);

		quick_sort_implmentt(list, first, position - 1, length);
		quick_sort_implmentt(list, position + 1, last, length);
	}
}

/**
 *quick_sort - the quicksort algorithm
 *@array: array
 *@size: list length
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_implmentt(array, 0, size - 1, size);
}
