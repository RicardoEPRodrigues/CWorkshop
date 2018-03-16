//
// Created by Ricardo Rodrigues on 18/10/2017.
//

#ifndef CWORKSHOP10_17_STUDENT_H
#define CWORKSHOP10_17_STUDENT_H

#include "Course.h"

typedef struct {
    char name[50];
    unsigned int id;

    Course* courses[10];
    unsigned int coursesCount;
} Student;

Student* Student_new(const char name[50], unsigned int id);

void Student_delete(Student* student);

void Student_addCourse(Student* student, Course* course);

void Student_info(Student* student);

#endif //CWORKSHOP10_17_STUDENT_H
