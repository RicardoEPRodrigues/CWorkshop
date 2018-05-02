/*
 * Created by Ricardo Rodrigues on 18/10/2017.
 */

#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student.h"

Student* Student_new(const char name[50], unsigned int id) {
    Student* student = malloc(sizeof(Student));
    student->id = id;
    strcpy(student->name, name);
    student->coursesCount = 0;
    return student;
}

void Student_delete(Student* student) {
    if (student == NULL) return;
    free(student);
}

void Student_addCourse(Student* student, Course* course) {
    if (student->coursesCount > 10) {
        return;
    }
    student->courses[student->coursesCount] = course;
    ++student->coursesCount;
}

void Student_info(Student* student) {
    unsigned int i;
    printf("Name: %s; Id: %d;\n", student->name, student->id);
    printf("Courses:\n");
    for (i = 0; i < student->coursesCount; ++i) {
        Course_info(student->courses[i]);
    }
}
