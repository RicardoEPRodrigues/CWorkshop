/*
 * File HeapSort.h in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#ifndef CWORKSHOP_HEAPSORT_H
#define CWORKSHOP_HEAPSORT_H

#include "Objects.h"

int Heap_parent(int k);
int Heap_left(int k);
int Heap_right(int k);

void Heap_FixDown(Vector* v, int l, int r, int index);
void Heap_buildheap(Vector* v, int l, int r);

void Sort_Heap_Vector(Vector* v);
void Sort_Heap_Vector_Range(Vector* v, unsigned int l, unsigned int r);

#endif
