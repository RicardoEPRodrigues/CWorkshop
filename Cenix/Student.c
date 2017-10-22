//
// Created by Ricardo Rodrigues on 18/10/2017.
//

#include <memory.h>
#include <stdio.h>
#include "Student.h"

Student Student_new(const char name[50], unsigned int id) {
    Student student = {{0}, id, {NULL}, 0};
    strcpy(student.name, name);
    return student;
}

void Student_addCourse(Student *student, Course* course) {
    if (student->coursesCount > 10) {
        return;
    }
    student->courses[student->coursesCount] = course;
    ++student->coursesCount;
}

void Student_info(Student *student) {
    printf("Name: %s; Id: %d;\n", student->name, student->id);
    printf("Courses:\n");
    for (unsigned int i = 0; i < student->coursesCount; ++i) {
        Course_info(student->courses[i]);
    }
}
