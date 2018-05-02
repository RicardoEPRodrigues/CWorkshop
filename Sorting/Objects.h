/*
 * File Objects.h in project CWorkshop
 * 
 * Copyright (C) Ricardo Rodrigues 2018 - All Rights Reserved
 */
#ifndef CWORKSHOP_OBJECTS_H
#define CWORKSHOP_OBJECTS_H

typedef int Number;

int Number_less(Number* a, Number* b);
int Number_greater(Number* a, Number* b);
int Number_equals(Number* a, Number* b);
void Number_exchange(Number* a, Number* b);

typedef struct {
    Number* a;
    unsigned int size;
} Vector;

Vector* Vector_create(unsigned int size);
Vector* Vector_createFromArray(Number* a, unsigned int size);
Vector* Vector_createFromArrayCopy(Number* a, unsigned int size);
void Vector_destroy(Vector* vector);
void Vector_print(Vector* vector);
void Vector_printRange(Vector* vector, unsigned int min, unsigned int max);
int Vector_isNull(Vector* vector);

#endif
