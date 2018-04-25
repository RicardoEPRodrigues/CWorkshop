#include <stdio.h>
#include "Objects.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "HeapSort.h"

int main() {
    printf("Hello! Let's sort this out!\n");
    unsigned int debug = 0;
    int v[] = {72, 29, 38, 22, 60, 2};

    {
        printf("\nSelection Sorting\n");
        Vector* vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        Sort_Selection_Vector(vector, debug);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }
    {
        printf("\nInsertion Sorting\n");
        Vector* vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        Sort_Insertion_Vector(vector, debug);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }
    {
        printf("\nBubble Sorting\n");
        Vector* vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        Sort_Bubble_Vector(vector, debug);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }
    {
        printf("\nHeap Sorting\n");
        Vector* vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        Sort_Heap_Vector(vector, debug);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }

    unsigned int min = 1, max = 4;
    printf("\nLet's sort just part of the vector, from index %1d to %1d\n", min,
           max);

    {
        printf("\nSelection Sorting\n");
        Vector* vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        Sort_Selection_Vector_Range(vector, min, max, debug);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }
    {
        printf("\nInsertion Sorting\n");
        Vector* vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        Sort_Insertion_Vector_Range(vector, min, max, debug);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }
    {
        printf("\nBubble Sorting\n");
        Vector* vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        Sort_Bubble_Vector_Range(vector, min, max, debug);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }
    {
        printf("\nHeap Sorting\n");
        Vector* vector = Vector_createFromArrayCopy(v, 6);

        printf("Initial Array:\n");
        Vector_print(vector);

        Sort_Heap_Vector_Range(vector, min, max, debug);

        printf("Sorted Array:\n");
        Vector_print(vector);

        Vector_destroy(vector);
    }

    return 0;
}