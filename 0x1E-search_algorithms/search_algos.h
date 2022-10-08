#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/**
 * In-built Libraries
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * singly linked list function
 */
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);
listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * Given Prototype
 */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_exponential(int *array, size_t size, size_t limit, int value);
int advanced_binary(int *array, size_t size, int value);

/**
 * Self Created Prototype
 */
void advanced_print(int *array, size_t a, size_t b);
void print_binary(int *array, size_t a, size_t b);
size_t min(size_t a, size_t b);
#endif
