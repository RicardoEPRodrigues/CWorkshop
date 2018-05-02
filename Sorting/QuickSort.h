/*
 * Created by ricardo on 28-04-2018.
 */

#ifndef SORTING_QUICKSORT_H
#define SORTING_QUICKSORT_H

#include "Objects.h"

unsigned int Quick_Partition(Vector* v, unsigned int l, unsigned int r);

void Sort_Quick_Vector(Vector* v);
void Sort_Quick_Vector_Range(Vector* v, unsigned int l, unsigned int r);

#endif
