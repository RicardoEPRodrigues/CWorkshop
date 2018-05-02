/*
 * File InsertionSort.c in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#include "InsertionSort.h"

void Sort_Insertion_Vector(Vector* v) {
    Sort_Insertion_Vector_Range(v, 0, v->size - 1);
}

void Sort_Insertion_Vector_Range(Vector* v, unsigned int l, unsigned int r) {
    unsigned int i;
    int j;
    Number* a = v->a;
    if (l > r || Vector_isNull(v) || r >= v->size) return;
    for (i = l + 1; i <= r; i++) {
        Number value = a[i];
        j = i - 1;
        while (j >= (int) l && Number_less(&value, &a[j])) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = value;
#if DEBUG
        Vector_printRange(v, l, r);
#endif
    }
}

void swap(void* a, void* b, size_t len) {
    unsigned char* p = a, * q = b, tmp;
    size_t i;
    for (i = 0; i != len; ++i) {
        tmp = p[i];
        p[i] = q[i];
        q[i] = tmp;
    }
}

void Sort_Insertion_Range(void* v, int l, int r, size_t size,
                          int (* less)(const void*, const void*),
                          void (* print)(const void*, int, int)) {
    int i, j;
    for (i = l + 1; i <= r; i++) {
        void* value = (char*) v + (i * size);
        j = i - 1;
        while (j >= l && less(value, (char*) v + (j * size))) {
            swap((char*) v + ((j + 1) * size), (char*) v + (j * size), size);
            value = (char*) v + (j * size);
            j--;
        }
#if DEBUG
        if (print != NULL)
            print(v, l, r);
#endif
    }
}