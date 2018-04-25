/*
 * File InsertionSort.c in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#include "InsertionSort.h"

void Sort_Insertion_Vector(Vector* v, unsigned int debug) {
    Sort_Insertion_Vector_Range(v, 0, v->size - 1, debug);
}

void Sort_Insertion_Vector_Range(Vector* v, unsigned int l, unsigned int r,
                                 unsigned int debug) {
    if (l > r || Vector_isNull(v) || r >= v->size) return;
    unsigned int i;
    int j;
    Number* a = v->a;
    for (i = l + 1; i <= r; i++) {
        Number value = a[i];
        j = i - 1;
        while (j >= (int) l && Number_less(&value, &a[j])) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = value;
        if (debug) {
            Vector_printRange(v, l, r);
        }
    }
}