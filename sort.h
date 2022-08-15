#ifndef _SORTING_H_
#define _SORTING_H_
#include <stdio.h>
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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void swap_s(int *array, int i, int j);
listint_t *swap(listint_t **list, listint_t *top);
int sort_back(listint_t **list, listint_t *top, int *flag);
int sort_fow(listint_t **list, int flag);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void top_down_merge(int *array, size_t ini, size_t midd, size_t end, int *dest);
void top_down_split(int *dest, size_t ini, size_t end, int *array);
void copy(int *array, int *dest, size_t size);
void merge_sort(int *array, size_t size);

#endif
