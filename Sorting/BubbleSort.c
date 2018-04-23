/*
 * File BubbleSort.c in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#include "BubbleSort.h"

void Sort_Bubble_Vector(Vector* v, unsigned int debug) {
    Sort_Bubble_Vector_Range(v, 0, v->size - 1, debug);
}

void Sort_Bubble_Vector_Range(Vector* v, unsigned int l, unsigned int r,
                                 unsigned int debug) {
    if (l > r || Vector_isNull(v) || r >= v->size) return;
    unsigned int i, j;
    Number* a = v->a;
    for (i = l; i < r; i++) {
        for (j = l; j < r-i; j++) {
            if (Number_less(&a[j + 1], &a[j])) {
                Number_exchange(&a[j], &a[j + 1]);
            }
        }
        if (debug) {
            Vector_printRange(v, l, r);
        }
    }
}