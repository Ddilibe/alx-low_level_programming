#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/**
 * In-built Libraries
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Given Prototype
 */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_exponential(int *array, size_t size, size_t limit, int value);

/**
 * Self Created Prototype
 */
void print_binary(int *array, size_t a, size_t b);
size_t min(size_t a, size_t b);
#endif
