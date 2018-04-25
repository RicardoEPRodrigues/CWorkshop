/*
 * File SelectionSort.c in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#include "SelectionSort.h"

void Sort_Selection_Vector(Vector* v, unsigned int debug) {
    Sort_Selection_Vector_Range(v, 0, v->size - 1, debug);
}

void Sort_Selection_Vector_Range(Vector* v, unsigned int l, unsigned int r,
                                 unsigned int debug) {
    if (l > r || Vector_isNull(v) || r >= v->size) return;
    unsigned int i, j;
    Number* a = v->a;
    for (i = l; i < r; i++) {
        int min = i;
        for (j = i + 1; j <= r; j++)
            if (Number_less(&a[j], &a[min]))
                min = j;
        Number_exchange(&a[i], &a[min]);
        if (debug) {
            Vector_printRange(v, l, r);
        }
    }
}