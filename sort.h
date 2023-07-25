#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *list, size_t length);
void array_print(const int *list, size_t length);
void list_print(const listint_t *list);
listint_t *swap_node(listint_t *node, listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *list, size_t length);
void quick_sort(int *list, size_t length);
void shell_sort(int *list, size_t length);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *list, size_t length);
void merge_sort(int *list, size_t length);
void heap_sort(int *list, size_t length);
void radix_sort(int *list, size_t length);
void bitonic_sort(int *list, size_t length);
void quick_sort_hoare(int *list, size_t length);

#endif
