/*
 * File HeapSort.c in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#include "HeapSort.h"

int Heap_parent(int k) {
    return ((k + 1) / 2) - 1;
}

int Heap_left(int k) {
    return 2 * k + 1;
}

int Heap_right(int k) {
    return 2 * (k + 1);
}

void Heap_FixDown(Vector* v, int l, int r, int index) {
    int ileft, iright, largest = index;
    Number* a = v->a;
    ileft = l + Heap_left(index - l); /* filho esquerdo de index */
    iright = l + Heap_right(index - l); /* filho direito de index */
    if (ileft <= r && Number_less(&a[largest], &a[ileft]))
        largest = ileft;
    if (iright <= r && Number_less(&a[largest], &a[iright]))
        largest = iright;
    if (largest != index) {
        Number_exchange(&a[index], &a[largest]);
        Heap_FixDown(v, l, r, largest);
    }
}

void Heap_buildheap(Vector* v, int l, int r) {
    int k, heapsize = r - l + 1;
    for (k = heapsize / 2 - 1; k >= l; k--)
        Heap_FixDown(v, l, r, l + k);
}

void Sort_Heap_Vector(Vector* v) {
    Sort_Heap_Vector_Range(v, 0, v->size - 1);
}

void Sort_Heap_Vector_Range(Vector* v, unsigned int l, unsigned int r) {
    if (l > r || Vector_isNull(v) || r >= v->size) return;
    Heap_buildheap(v, l, r);
#if DEBUG
    Vector_printRange(v, l, r);
#endif
    while (r - l > 0) {
        Number_exchange(&v->a[l], &v->a[r]);
        Heap_FixDown(v, l, --r, l);
#if DEBUG
        Vector_printRange(v, l, r);
#endif
    }
}