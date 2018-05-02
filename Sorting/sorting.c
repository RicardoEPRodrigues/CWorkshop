#include <stdio.h>
#include "Objects.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "QuickSort.h"

typedef void (* SortFunction)(Vector*);

typedef void (* SortRangeFunction)(Vector*, unsigned int, unsigned int);

typedef struct {
    SortFunction sortFunction;
    SortRangeFunction sortRangeFunction;
    char* name;
} SortFunctionPair;

int lessFunc(const void* a, const void* b) {
    return *(int*) a < *(int*) b;
}

void print(const void* v, int l, int r) {
    int i;
    printf("Array = { ");
    for (i = l; i <= r; ++i) {
        printf("%3d", ((int*) v)[i]);
    }
    printf(" }\n");
}

int main() {
    int v[] = {72, 29, 38, 22, 60, 2};

    SortFunctionPair functions[] = {
            {Sort_Selection_Vector, Sort_Selection_Vector_Range, "Selection Sort"},
            {Sort_Insertion_Vector, Sort_Insertion_Vector_Range, "Insertion Sort"},
            {Sort_Bubble_Vector,    Sort_Bubble_Vector_Range,    "Bubble Sort"},
            {Sort_Heap_Vector,      Sort_Heap_Vector_Range,      "Heap Sort"},
            {Sort_Quick_Vector,     Sort_Quick_Vector_Range,     "Quick Sort"}
    };
    int functionsSize = 5;
    int i;
    Vector* vector;
    unsigned int min = 1, max = 4;

    printf("Hello! Let's sort this out!\n");

    for (i = 0; i < functionsSize; ++i) {
        printf("\nRunning %s\n", functions[i].name);
        vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        (*functions[i].sortFunction)(vector);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }

    printf("\nLet's sort just part of the vector, from index %1d to %1d\n", min,
           max);

    for (i = 0; i < functionsSize; ++i) {
        printf("\nRunning %s\n", functions[i].name);
        vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        (*functions[i].sortRangeFunction)(vector, min, max);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }

    printf("\nRunning Insertion sort using Void function\n");
    vector = Vector_createFromArrayCopy(v, 6);

    printf("Initial Array:\n");
    Vector_print(vector);

    Sort_Insertion_Range((void*) vector->a, 0, 5, sizeof(Number), lessFunc,
                         print);

    printf("Sorted Array:\n");
    Vector_print(vector);

    Vector_destroy(vector);

#if DEBUG
    printf("Debug Flag is active!\n");
#endif

    return 0;
}