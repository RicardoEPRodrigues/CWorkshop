/*
 * Created by ricardo on 28-04-2018.
 */

#include "QuickSort.h"

void Sort_Quick_Vector(Vector* v) {
    Sort_Quick_Vector_Range(v, 0, v->size - 1);
}

void Sort_Quick_Vector_Range(Vector* v, unsigned int l, unsigned int r) {
    unsigned int i;
    if (l > r || Vector_isNull(v) || r >= v->size) return;
    if (r <= l) return;
    i = Quick_Partition(v, l, r);
    Sort_Quick_Vector_Range(v, l, i - 1);
    Sort_Quick_Vector_Range(v, i + 1, r);
}

unsigned int
Quick_Partition(Vector* v, unsigned int l, unsigned int r) {
    Number* a = v->a;
    int i = (int) l - 1;
    unsigned int j = r;
    Number value = a[r];
    while (i < (int) j) {
        while (Number_less(&a[++i], &value));
        while (Number_less(&value, &a[--j]))
            if (j == l)
                break;
        if (i < (int) j)
            Number_exchange(&a[i], &a[j]);
    }
    Number_exchange(&a[i], &a[r]);
#if DEBUG
    Vector_printRange(v, l, r);
#endif
    return (unsigned int) i;
}