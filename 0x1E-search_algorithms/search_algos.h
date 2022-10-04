#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_binary(int *array, size_t a, size_t b);
#endif
