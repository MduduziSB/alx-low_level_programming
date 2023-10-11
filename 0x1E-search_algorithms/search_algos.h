#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t i, size_t size);
#endif

