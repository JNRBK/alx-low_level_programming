#ifndef MAIN_H
#define MAIN_H


/*headers*/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>


/*prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
