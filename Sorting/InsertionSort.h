/*
 * File InsertionSort.h in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#ifndef CWORKSHOP_INSERTIONSORT_H
#define CWORKSHOP_INSERTIONSORT_H

#include <stdlib.h>
#include "Objects.h"

/* Utility function that swaps unknown type variables */
void swap(void* a, void* b, size_t len);

void Sort_Insertion_Vector(Vector* v);
void Sort_Insertion_Vector_Range(Vector* v, unsigned int l, unsigned int r);
void Sort_Insertion_Range(void* v, int l, int r, size_t size, int (*less)(const void*, const void*), void (*print)(const void*, int, int));

#endif
