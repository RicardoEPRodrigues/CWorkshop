/*
 * File Objects.c in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#include <malloc.h>
#include <stdio.h>
#include "Objects.h"

int Number_less(Number* a, Number* b) {
    return *a < *b;
}

int Number_greater(Number* a, Number* b) {
    return *a > *b;
}

int Number_equals(Number* a, Number* b) {
    return *a == *b;
}

void Number_exchange(Number* a, Number* b) {
    Number temp = *a;
    *a = *b;
    *b = temp;
}

Vector* Vector_create(unsigned int size) {
    Vector* array = malloc(sizeof(Vector));
    array->a = malloc(sizeof(Number) * size);
    array->size = size;
    return array;
}

Vector* Vector_createFromArray(Number* a, unsigned int size) {
    Vector* vector = Vector_create(size);
    vector->a = a;
    vector->size = size;
    return vector;
}

Vector* Vector_createFromArrayCopy(Number* a, unsigned int size) {
    Vector* vector = Vector_create(size);
    for (unsigned int i = 0; i < size; ++i) {
        vector->a[i] = a[i];
    }
    vector->size = size;
    return vector;
}

void Vector_destroy(Vector* array) {
    free(array->a);
    free(array);
}

void Vector_print(Vector* vector) {
    if (vector == NULL)
        return;

    Vector_printRange(vector, 0, vector->size - 1);
}

void Vector_printRange(Vector* vector, unsigned int min, unsigned int max) {
    if (min > max || vector == NULL || max >= vector->size)
        return;

    printf("Array = { ");
    for (unsigned int i = min; i <= max; ++i) {
        printf("%3d", vector->a[i]);
    }
    printf(" }\n");
}

int Vector_isNull(Vector* vector) {
    return vector == NULL;
}