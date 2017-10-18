//
// Created by Ricardo Rodrigues on 18/10/2017.
//

#include <mem.h>
#include <stdio.h>
#include "Course.h"

Course Course_new(const char name[50], unsigned int id) {
    Course course = {{0}, id, {{""}}, 0};
    strcpy(course.name, name);
    return course;
}

void Course_addNews(Course *course, char news[50]) {
    if (course->newsCount > 10) {
        return;
    }
    strcpy(course->news[course->newsCount], news);
    course->newsCount++;
}

void Course_info(Course *course) {
    printf("\tName: %s; Id: %d;\n", course->name, course->id);
    printf("\tNews:\n");
    for (unsigned int i = 0; i < course->newsCount; ++i) {
        printf("\t\t%s\n", course->news[i]);
    }
}